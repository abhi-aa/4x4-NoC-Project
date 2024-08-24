# NoC Simulation Project

This repository contains the SystemC-based Network-on-Chip (NoC) simulation project for the COE838/EE8221 course. The project involves modeling and simulating an NoC system with various topologies such as mesh, torus, or hypercube.

## Project Overview

The project focuses on the design and simulation of a NoC system, which includes routers, IP cores, and interconnections. The provided design starts with a simple 1×2 mesh NoC, which is then expanded to more complex systems.

### Key Components

- **Routers**: Act as switches connecting different IP cores.
- **IP Cores**: The processing units in the NoC, connected via the routers.
- **Topologies**: The NoC can be modeled using different topologies such as mesh, torus, or hypercube.

## Project Structure

- **`src/`**: Contains the source code files for the NoC simulation.
  - `packet.h`: Defines the structure of a packet in the NoC.
  - `source.h` & `source.cpp`: Implements the source module, responsible for generating packets.
  - `sink.h` & `sink.cpp`: Implements the sink module, responsible for receiving packets.
  - `router.h` & `router.cpp`: Implements the router module, handling packet routing.

- **`docs/`**: Contains documentation and reports.
  - `Project_Report.pdf`: Detailed report of the project.
  - `Project_Manual.pdf`: Project manual with guidelines and instructions.

- **`examples/`**: Example SystemC codes demonstrating basic NoC configurations.

## Getting Started

### Prerequisites

- **SystemC**: The project requires SystemC for simulation. Ensure it is installed on your system.
