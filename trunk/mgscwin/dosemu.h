// 0000H-000FH
0x76,0xc9,0x76,0x76, // JP WBOOT
0x76,0xc3,(BDOS_ENTRY&0xff),(BDOS_ENTRY>>8), // JP BOOS (D000H)
0x76,0x76,0x76,0x76, // 
0x76,0xc9,0x76,0x76, // JP RDSLT
// 0010H-001FH
0x76,0x76,0x76,0x76, // 
0x76,0xc9,0x76,0x76, // JP WRSLT
0x76,0x76,0x76,0x76, // 
0x76,0xc9,0x76,0x76, // JP CALSLT
// 0020H-002FH
0x76,0x76,0x76,0x76, 
0x76,0xc9,0x76,0x76, // JP ENASLT
0x76,0x76,0x76,0x76, // 
0x76,0x76,0x76,0x76, // 
// 0030H-003FH
0x76,0xc9,0x76,0x76, // JP CALLF
0x76,0x76,0x76,0x76, // 
0x76,0xc9,0x00,0x00, // JP INTRPT
0x76,0x76,0x76,0x76, // 
// 0040H-004FH
0x76,0x76,0x76,0x76, // 
0x76,0x76,0x76,0x76, // 
0x76,0x76,0x76,0x76, // 
0x76,0x76,0x76,0x76, // 
// 0050H-005FH
0x76,0x76,0x76,0x76, // 
0x76,0x76,0x76,0x76, // 
0x76,0x76,0x76,0x76, // 
0x00,'T', 'E', 'M',
// 0060H-006FH
'P', ' ', ' ', ' ',
' ', 'M', 'U', 'S',
0x00,0x00,0x00,0x00,
0x00,'-', 'T', ' ', 
// 0070H-007FH
' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ',
0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,

// 0080H-008FH ( CP/M�݊�, �����ۑ��I�v�V���� )
0x1F,' ', 'T', 'E', 
'M', 'P', '.', 'M',
'U', 'S', ' ', '-',
'E', ' ', '-', 'S',

// 0090H-009FH (���̑��I�v�V�����̈�)
' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ',
' ', ' ', ' ', ' ',
' ', ' ', ' ', ' '


