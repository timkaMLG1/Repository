#pragma once

#define offset(address) (address - (0x00400000 /* The first address in teh disassembly */) + (DWORD)GetModuleHandleA(0))

#define R_LUA_PCALL offset(0x56e760) // the function inside a fi statement called above the xref: "*** Value not found ***"