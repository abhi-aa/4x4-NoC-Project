// sink.cpp
#include "sink.h"
void sink::receive_data(){

	packet v_packet;

	sc_time t_recv;

	if ( sclk.event() ) ack_out.write(false);
	if (packet_in.event() ) {
	 
		pkt_recv++ ;
		ack_out.write(true);
		v_packet= packet_in.read();
		t_recv = sc_time_stamp();
		cout << "\nt: " << sc_time_stamp() << "  ||    New Pkt:  " << (int)v_packet.data<< " is received from source: " << (int)v_packet.id  << " by sink:  " << (int)sink_id.read() << endl << "____________________________________________________________________________________________";
	
  }
}

