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
| Name | Qty | Unit | Price (USD) | Total (USD) | Source |
| :--- | :---: | :---: | ---: | ---: | :--- |
| Seeed Studio XIAO ESP32 S3 | 1 | pcs | 16.51 | 16.51 | [Link](https://www.aliexpress.us/item/3256808047100037.html?src=google&src=google&albch=shopping&acnt=179-224-6891&isdl=y&slnk=&plac=&mtctp=&albbt=Google_7_shopping&aff_platform=google&aff_short_key=_oFgTQeV&gclsrc=aw.ds&albagn=888888&ds_e_adid=&ds_e_matchtype=&ds_e_device=c&ds_e_network=x&ds_e_product_group_id=&ds_e_product_id=en3256808047100037&ds_e_product_merchant_id=5363656664&ds_e_product_country=US&ds_e_product_language=en&ds_e_product_channel=online&ds_e_product_store_id=&ds_url_v=2&albcp=23114515373&albag=&isSmbAutoCall=false&needSmbHouyi=false&gad_source=1&gad_campaignid=23118775333&gbraid=0AAAABBR8xIfTUtC7O1tuXlkIf2M5FA2xj&gclid=CjwKCAjw0dPRBhAPEiwAE5vTTmgMm-MI237MqmcJC00hYiCm4hKgtvvPxVcgc58YOvQEUg3oFTtachoCPgMQAvD_BwE&gatewayAdapt=glo2usa) |
| 1.14 inch IPS LCD 135x240 | 1 | pcs | 5.44 | 5.44 | [Link](https://www.aliexpress.us/item/3256808427301455.html?spm=a2g0o.detail.0.0.36e5AJKHAJKHE3&mp=1&pdp_npi=6%40dis%21USD%21USD+5.44%21USD+2.72%21%21USD+2.72%21%21%21%402101ea8c17819208326787818e57bb%2112000045952544848%21ct%21US%216225596251%21%211%210%21&_gl=1*weqlm4*_gcl_aw*R0NMLjE3ODE5MjA4MzIuQ2p3S0NBancwZFBSQmhBUEVpd0FFNXZUVG1nTW0tTUkyMzdNcW1jSkMwMGhZaUNtNGhLZ3R2dlB4VmNnYzU4WU92UUVVZzNvRlR0YWNob0NQZ01RQXZEX0J3RQ..*_gcl_dc*R0NMLjE3ODE5MjA4MzIuQ2p3S0NBancwZFBSQmhBUEVpd0FFNXZUVG1nTW0tTUkyMzdNcW1jSkMwMGhZaUNtNGhLZ3R2dlB4VmNnYzU4WU92UUVVZzNvRlR0YWNob0NQZ01RQXZEX0J3RQ..*_gcl_au*OTU4ODQyODgyLjE3ODE4MTkwNjc.*_ga*MTk2MjEwMjIwOC4xNzgxOTE4NTM2*_ga_VED1YSGNC7*czE3ODE5MTg1MzYkbzEkZzEkdDE3ODE5MjA4MzEkajU5JGwwJGgw&gatewayAdapt=glo2usa) |
| 1N4148 SOD-123 Diode | 9 | pcs | 0.04 | 0.33 | [Link](https://www.aliexpress.us/item/3256806021629352.html?spm=a2g0o.productlist.main.5.32386d14zDEIy1&algo_pvid=d0be0353-cd48-4105-8f48-2a96d6bb71e9&algo_exp_id=d0be0353-cd48-4105-8f48-2a96d6bb71e9-4&pdp_ext_f=%7B%22order%22%3A%2273%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%213.47%210.99%21%21%2123.42%216.72%21%402101df0e17819208968915842e5180%2112000036282899718%21sea%21US%216225596251%21X%211%210%21n_tag%3A-29919%3Bd%3A77172365%3Bm03_new_user%3A-29895%3BpisId%3A5000000204411062&curPageLogUid=nRo8JwtYLc9v&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005006207944104%7C_p_origin_prod%3A) |
| Cherry MX Switch | 9 | pcs | 0.90 | 8.50 | [Link](https://www.aliexpress.us/item/3256808812099705.html?spm=a2g0o.detail.0.0.283eJW7rJW7rr9&mp=1&pdp_npi=6%40dis%21USD%21USD+9.41%21USD+7.72%21%21USD+7.72%21%21%21%402101ea8c17819209663723471e57bb%2112000047513088834%21ct%21US%216225596251%21%211%210%21&_gl=1*iawjvq*_gcl_aw*R0NMLjE3ODE5MjA4OTQuQ2owS0NRancyX1RRQmhDbkFSSXNBRjMtWGh4bXg3Z2lGMnhpOUtaMVdsUmY3ZFIxaERxMGliYUJRNXRGWE0zSjRSOFNSY3RYNEFBUmstVWFBamVFRUFMd193Y0I.*_gcl_dc*R0NMLjE3ODE5MjA4OTQuQ2owS0NRancyX1RRQmhDbkFSSXNBRjMtWGh4bXg3Z2lGMnhpOUtaMVdsUmY3ZFIxaERxMGliYUJRNXRGWE0zSjRSOFNSY3RYNEFBUmstVWFBamVFRUFMd193Y0I.*_gcl_au*OTU4ODQyODgyLjE3ODE4MTkwNjc.*_ga*MTk2MjEwMjIwOC4xNzgxOTE4NTM2*_ga_VED1YSGNC7*czE3ODE5MTg1MzYkbzEkZzEkdDE3ODE5MjA5NjYkajUwJGwwJGgw&gatewayAdapt=glo2usa) |
| M2 4mm Screws | 4 | pcs | 0.03 | 0.12 | [Link](https://www.aliexpress.us/item/2251832785290389.html?src=google&snps=y&src=google&albch=shopping&acnt=708-803-3821&isdl=y&slnk=&plac=&mtctp=&albbt=Google_7_shopping&aff_platform=google&aff_short_key=UneMJZVf&gclsrc=aw.ds&albagn=888888&ds_e_adid=&ds_e_matchtype=&ds_e_device=c&ds_e_network=x&ds_e_product_group_id=&ds_e_product_id=en2251832785290389&ds_e_product_merchant_id=107792874&ds_e_product_country=US&ds_e_product_language=en&ds_e_product_channel=online&ds_e_product_store_id=&ds_url_v=2&albcp=20542171667&albag=&isSmbAutoCall=false&needSmbHouyi=false&gad_source=1&gad_campaignid=18545443176&gbraid=0AAAAAD6I-hEGa4vCjbQEz_fnmZhTeNZeX&gclid=CjwKCAjwxb7RBhA5EiwAQ-AAdHrgWosxNOZRkccANcNKR7vt21WIStiqv9YQWGaLNnBF2wXj5XR0PBoCLDAQAvD_BwE&gatewayAdapt=glo2usa) |
| M2 14mm Screws | 4 | pcs | 0.04 | 0.14 | [Link](https://www.aliexpress.us/item/2251832785290389.html?src=google&snps=y&src=google&albch=shopping&acnt=708-803-3821&isdl=y&slnk=&plac=&mtctp=&albbt=Google_7_shopping&aff_platform=google&aff_short_key=UneMJZVf&gclsrc=aw.ds&albagn=888888&ds_e_adid=&ds_e_matchtype=&ds_e_device=c&ds_e_network=x&ds_e_product_group_id=&ds_e_product_id=en2251832785290389&ds_e_product_merchant_id=107792874&ds_e_product_country=US&ds_e_product_language=en&ds_e_product_channel=online&ds_e_product_store_id=&ds_url_v=2&albcp=20542171667&albag=&isSmbAutoCall=false&needSmbHouyi=false&gad_source=1&gad_campaignid=18545443176&gbraid=0AAAAAD6I-hEGa4vCjbQEz_fnmZhTeNZeX&gclid=CjwKCAjwxb7RBhA5EiwAQ-AAdHrgWosxNOZRkccANcNKR7vt21WIStiqv9YQWGaLNnBF2wXj5XR0PBoCLDAQAvD_BwE&gatewayAdapt=glo2usa) |
| PCB | 1 | pcs | 0.80 | 0.80 | [Link](https://jlcpcb.com) |
| PLA 3D Printed Case | 1 | pcs | - | - | 
| **Total** | **30** | **-** | **-** | **31.84** | **-** |

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
