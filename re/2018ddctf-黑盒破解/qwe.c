#include "defs.h"

__int64 __fastcall sub_400DC1(__int64 a1) { tmp = byte_6030E0[index]; }

__int64 __fastcall sub_400E7A(__int64 a1) { byte_6030E0[index] = tmp; }

__int64 __fastcall sub_400F3A(__int64 a1) { tmp = tmp + input - 33; }

__int64 __fastcall sub_401064(__int64 a1) { tmp = tmp - input + 33; }

__int64 __fastcall sub_4011C9(__int64 a1) { index++; }

__int64 __fastcall sub_40133D(__int64 a1) {
  __int64 result;       // rax
  unsigned int v2;      // eax
  unsigned int v3;      // eax
  unsigned int v4;      // eax
  int i;                // [rsp+14h] [rbp-2Ch]
  char s[8];            // [rsp+20h] [rbp-20h] BYREF
  __int64 v8;           // [rsp+28h] [rbp-18h]
  int v9;               // [rsp+30h] [rbp-10h]
  char v10;             // [rsp+34h] [rbp-Ch]
  unsigned __int64 v11; // [rsp+38h] [rbp-8h]

  v11 = __readfsqword(0x28u);
  *(_QWORD *)s = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  if (!a1)
    return 0LL;
  if (input == 115) {
    input = 0;
    for (i = 0; i <= 19; ++i)
      s[i] = *(_BYTE *)(byte_6030E0 + *(_DWORD *)(index) + i);
    puts(s);
    v2 = strlen(s);
    if ((unsigned int)sub_400C74(s, v2) == 0x4904DDF) {
      v3 = strlen(s);
      if ((unsigned int)sub_400BC6(s, v3) == 0x2ACA2A9E) {
        v4 = strlen(s);
        if ((unsigned int)sub_400C1D(s, v4) == 0x1A13C13C)
          byte_603F00 = 1;
      }
    }
    result = 1LL;
  } else {
    printf("%c\n", (unsigned int)*(char *)(tmp));
    result = 1LL;
  }
  return result;
}

__int64 __fastcall sub_4012F3(__int64 a1) { index--; }

__int64 __fastcall sub_4014B9(__int64 a1) {
  data[index] = input[index + input[i] - 48] - 49
}

__int64 __fastcall sub_400CF1(__int64 a1) {
  int i; // [rsp+Ch] [rbp-Ch]

  if (!a1)
    return 0LL;
  for (i = 0; *(char *)(a1 + 664) > i; ++i)
    ++*(_DWORD *)(index);
  if (*(char *)(a1 + 664) - 16 > 89)
    return 0LL;
  *(_BYTE *)(*(_QWORD *)(a1 + 280) + *(int *)(index) + *(_QWORD *)a1) =
      *(_BYTE *)(a1 + 16 + *(int *)(index) + (__int64)*(char *)(a1 + 664) -
                 48) -
      49;
  return 1LL;
}
