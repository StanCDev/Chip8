# Chip8 Emulator

# Memory Layout
The official memory map is

Memory Map:
+---------------+= 0xFFF (4095) End of Chip-8 RAM<br>
|               |<br>
|               |<br>
|               |<br>
|               |<br>
|               |<br>
| 0x200 to 0xFFF|<br>
|     Chip-8    |<br>
| Program / Data|<br>
|     Space     |<br>
|               |<br>
|               |<br>
+- - - - - - - -+= 0x600 (1536) Start of ETI 660 Chip-8 programs<br>
|               |<br>
|               |<br>
|               |<br>
+---------------+= 0x200 (512) Start of most Chip-8 programs<br>
| 0x000 to 0x1FF|<br>
| Reserved for  |<br>
|  interpreter  |<br>
+---------------+= 0x000 (0) Start of Chip-8 RAM


I decided to change it a bit as the interpreter is not stored in main memory!
+---------------+= 0xFFF (4095) End of Chip-8 RAM<br>
|               |<br>
|               |<br>
|               |<br>
|               |<br>
|               |<br>
| 0x200 to 0xFFF|<br>
|     Chip-8    |<br>
| Program / Data|<br>
|     Space     |<br>
|               |<br>
|               |<br>
|               |<br>
+- - - - - - - -+= 0x600 (1536) Start of ETI 660 Chip-8 programs<br>
|               |<br>
|               |<br>
|               |<br>
+---------------+= 0x200 (512) Start of most Chip-8 programs<br>
|               |<br>
|     Stack     |<br>
|               |<br>
+---------------+= 0x000 (0) Start of Chip-8 RAM


### Official Description
http://devernay.free.fr/hacks/chip8/C8TECH10.HTM#00E0

### Useful links
https://tobiasvl.github.io/blog/write-a-chip-8-emulator/
