# SmokeDetectionSystem
Monitors smoke levels using an analog sensor, triggers a buzzer, and sequentially flashes 6 LEDs if smoke exceeds threshold.

## Features

- Smoke level detection using an analog sensor.
- Buzzer alert when smoke is detected.
- Sequential LED visual alert.
- Adjustable smoke threshold.

## Components Required

- Arduino board (Uno, Mega, etc.)
- Analog Smoke Sensor
- Buzzer
- 6 LEDs
- Jumper wires

## Pin Connections

| Component      | Arduino Pin |
|----------------|-------------|
| Smoke Sensor   | A0          |
| Buzzer         | 6           |
| LEDs           | 30, 31, 32, 33, 34, 35 |

## How It Works

1. Arduino reads the smoke sensor analog value.
2. If the smoke value exceeds 500:
   - Turns on the buzzer.
   - Turns on LEDs one by one with 200ms delay to create a visual alert.
3. If smoke value is below threshold, buzzer remains off.

## Notes

- The smoke threshold can be adjusted in the code (`if(smoke > 500)`).
- LED pins can be changed according to your hardware setup.
- Delay between LEDs controls the speed of the visual alert.

## Usage

1. Connect components according to the pin mapping.
2. Upload `SmokeAlarm.ino` to your Arduino.
3. Trigger smoke (or simulate) to test buzzer and LED sequence.
