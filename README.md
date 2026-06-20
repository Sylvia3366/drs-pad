# DRS-Pad 🏎️💨
<img width="1688" height="2588" alt="reallygreatsite com" src="https://github.com/user-attachments/assets/dc81a843-4d72-4ac6-9181-9d99c3c931bc" />

[ONSHAPE CAD](https://cad.onshape.com/documents/f871e0d794d92113bb05b77c/w/53d91f0d4610f412f5f57ae5/e/b5381f3e555c04c2681f8eeb?renderMode=0&uiState=6a35e3a11d4e4c91f8bc6b19)
-

What is it? 
-
The DRS-Pad, or Desktop Response System Pad, is a macropad powered by the XIAO-ESP32-S3 with 9 mechanical keys to save your fingers and hasten your workflow so you can be more efficient! Named after the now retired DRS (Drag Reduction System, RIP 2011–2025), the DRS-Pad is modeled after the iconic F1 Pirelli tire (specifically the soft one). Paired with a 1.14" IPS LCD display, it allows you to view race/qualifying results on race/qualification days and WDC/WCC standings on non-race days.

Why did I make it? 
-
First and foremost, I've been wanting to make a macropad for the longest time now. I'm someone who's constantly on my computer—whether it be writing stories, programming/playing games, editing videos, or just doing homework, my fingers are constantly jumping around my keyboard. As a result, I often end the day with cramped fingers, so hopefully, this macropad will solve that :(

As for the theme: I've been an F1 fan for some time now, and I've grown a habit of checking my phone and social media for race updates. But I simply can't do that when I'm in the middle of working on CADing or programming. So I thought, what if I could combine both those problems into one solution?

How does it work?
-
So I made the DRS-Pad! Aside from being your usual, run-of-the-mill macropad for improving workflow and allowing your fingers to rest, there's a little screen that updates you on the latest F1 standings in real time! On a typical, non-race or quali day, the DRS-Pad will flicker between the WDC (driver's championship) and WCC (constructor's championship) every minute. During free practice, quali, and race days, the screen will update every minute with live feed on the current event, displaying the top 8 drivers.

Now, you can save your fingers AND enjoy some nice F1 updates all at the same time :)!

# Designing the PCB 🏁
PCB designed on KiCAD!
-
<img width="1021" height="518" alt="Screenshot 2026-06-18 at 11 29 14 PM" src="https://github.com/user-attachments/assets/ae6dbcd5-8573-460e-a0ef-1ef132c33fdc" />

<img width="659" height="616" alt="Screenshot 2026-06-19 at 9 13 22 PM" src="https://github.com/user-attachments/assets/f372c67d-c09a-4c1b-bbd1-ec656089da4e" />

<img width="630" height="623" alt="Screenshot 2026-06-19 at 9 14 33 PM" src="https://github.com/user-attachments/assets/f3846d0a-4b5a-446d-aa79-c6f9975ffaac" />
<img width="644" height="624" alt="Screenshot 2026-06-19 at 9 14 27 PM" src="https://github.com/user-attachments/assets/22ad9e62-52b1-452b-88e9-f68ea0e42a30" />

CADed and assembled on OnShape!
-
<img width="683" height="410" alt="Screenshot 2026-06-19 at 9 16 24 PM" src="https://github.com/user-attachments/assets/461d5407-3b2d-45e5-a9a4-1fca25d856ef" />
<img width="691" height="436" alt="Screenshot 2026-06-19 at 9 15 55 PM" src="https://github.com/user-attachments/assets/fd8289b5-6cd7-4752-87b5-544a009aa73b" />

<img width="786" height="437" alt="Screenshot 2026-06-19 at 9 16 43 PM" src="https://github.com/user-attachments/assets/dd53bea8-bbbe-42af-afe0-c62d70112b4b" />
<img width="683" height="587" alt="Screenshot 2026-06-19 at 9 16 55 PM" src="https://github.com/user-attachments/assets/585987df-8df5-4589-b129-8d210ac89532" />

<img width="804" height="479" alt="Screenshot 2026-06-19 at 9 17 05 PM" src="https://github.com/user-attachments/assets/1bbe4f7e-92bb-4840-8395-176256411e86" />
<img width="684" height="613" alt="Screenshot 2026-06-19 at 9 17 11 PM" src="https://github.com/user-attachments/assets/7338987e-35a4-4b45-b898-4f3e40df52c3" />

Rendered on Fusion360!
-
<img width="745" height="461" alt="Screenshot 2026-06-19 at 6 39 32 PM" src="https://github.com/user-attachments/assets/a620f946-893b-477d-a393-0ba238d60639" />
<img width="747" height="641" alt="Screenshot 2026-06-19 at 8 05 35 PM" src="https://github.com/user-attachments/assets/4eed2338-465e-4443-b097-25a11b4a7332" />

# Bill of Materials 🧾
| Name | Qty | Unit | Price (USD) | Total (USD) | MOQ | MOQ Price | Source |
| :--- | :---: | :---: | ---: | ---: | ---: | ---: | :--- |
| Seeed Studio XIAO ESP32 S3 | 1 | pcs | 13.81 | 13.81 | 1 | 13.81 | [Link](https://www.aliexpress.us/item/3256808047100037.html) |
| 1.14 inch IPS LCD 135x240 | 1 | pcs | 2.72 | 2.72 | 1 | 2.72 | [Link](https://www.aliexpress.us/item/3256808427301455.html) |
| 1N4148 SOD-123 Diode | 9 | pcs | 0.04 | 0.33 | 100 | 3.70 | [Link](https://www.aliexpress.us/item/3256806021629352.html) |
| Cherry MX Switch | 9 | pcs | 0.77 | 6.95 | 10 | 7.72 | [Link](https://www.aliexpress.us/item/3256808812099705.html) |
| M2 4mm Screws | 4 | pcs | 0.03 | 0.12 | 50 | 1.51 | [Link](https://www.aliexpress.us/item/2251832785290389.html) |
| M2 14mm Screws | 4 | pcs | 0.04 | 0.14 | 50 | 1.75 | [Link](https://www.aliexpress.us/item/2251832785290389.html) |
| PCB | 1 | pcs | 0.80 | 0.80 | 5 | 4.00 | [Link](https://jlcpcb.com) |
| PLA 3D Printed Case | 1 | pcs | - | - | - | - |
| **Total** | **30** | **-** | **-** | **24.87** | **-** | **35.21** | **-** |

# Build and Assembly 🔧

Required Tools
-
1. Solder
2. Soldering iron
3. Tweezers
4. Screwdriver for M2 screws
5. Computer w. a USB port
6. 3D printer

Assembly
-
1. Attach the keycaps onto the switches.
2. Solder the 1N4148 diodes onto the PCB.
3. Solder the remaining parts onto the PCB.
4. Place the assembled PCB into the bottom case.
5. Secure on the mounting holes with M2 4mm screws.
6. Secure the top case on the screw holes with M2 14mm screws (I used 12mm in the CAD, which works).
