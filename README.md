## Prusa Buddy FW - Diagnostic USB MSC Firmware

#### Description

This is firmware for STM32F4 (STM23F446RE) which aims to reproduce potential issues with USB mass storage devices, which may cause the Prusa Buddy FW to encounter faults or unexpected behaviors. While it may not be possible to easily reproduce problematic hardware (unstable oscillators, noisy circuits, etc.) it is still possible to reproduce problematic firmware.

The firmware follows a standard MSC implementation, but utilizes a SPI-SD interface (standard design w/ buffered data lines) to store data on a SPI-capable SD card. 

The storage device behaves as a FS device. Combined with the slower SPI-SD interface, the data throughput it is rather slow (effective rate of 2.0-2.5 mbps, ~300 KB/s), but sufficient for printing on actual hardware.



#### Implemented Fault Types

Multiple fault types can be active at one time, and are defined in `fault_config.h`.

- **Slow Data Lines** - Adds delays (random or static) to each data exchange on the MSC endpoints.
- **Random Long Delays** - Intermittent random very long delays (longer than Buddy FW watchdog timeout period).
- **Long Initialization** - Very long delays at various points during initialization



#### Results

Results are forthcoming...
