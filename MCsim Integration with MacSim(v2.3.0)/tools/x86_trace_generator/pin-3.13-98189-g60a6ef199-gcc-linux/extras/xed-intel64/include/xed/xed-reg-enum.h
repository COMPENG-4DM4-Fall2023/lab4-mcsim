/*BEGIN_LEGAL 
Copyright 2002-2019 Intel Corporation.

This software and the related documents are Intel copyrighted materials, and your
use of them is governed by the express license under which they were provided to
you ("License"). Unless the License provides otherwise, you may not use, modify,
copy, publish, distribute, disclose or transmit this software or the related
documents without Intel's prior written permission.

This software and the related documents are provided as is, with no express or
implied warranties, other than those that are expressly stated in the License.
END_LEGAL */
/// @file xed-reg-enum.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(XED_REG_ENUM_H)
# define XED_REG_ENUM_H
#include "xed-common-hdrs.h"
typedef enum {
  XED_REG_INVALID,
  XED_REG_BNDCFGU,
  XED_REG_BNDSTATUS,
  XED_REG_BND0,
  XED_REG_BND1,
  XED_REG_BND2,
  XED_REG_BND3,
  XED_REG_CR0,
  XED_REG_CR1,
  XED_REG_CR2,
  XED_REG_CR3,
  XED_REG_CR4,
  XED_REG_CR5,
  XED_REG_CR6,
  XED_REG_CR7,
  XED_REG_CR8,
  XED_REG_CR9,
  XED_REG_CR10,
  XED_REG_CR11,
  XED_REG_CR12,
  XED_REG_CR13,
  XED_REG_CR14,
  XED_REG_CR15,
  XED_REG_DR0,
  XED_REG_DR1,
  XED_REG_DR2,
  XED_REG_DR3,
  XED_REG_DR4,
  XED_REG_DR5,
  XED_REG_DR6,
  XED_REG_DR7,
  XED_REG_FLAGS,
  XED_REG_EFLAGS,
  XED_REG_RFLAGS,
  XED_REG_AX,
  XED_REG_CX,
  XED_REG_DX,
  XED_REG_BX,
  XED_REG_SP,
  XED_REG_BP,
  XED_REG_SI,
  XED_REG_DI,
  XED_REG_R8W,
  XED_REG_R9W,
  XED_REG_R10W,
  XED_REG_R11W,
  XED_REG_R12W,
  XED_REG_R13W,
  XED_REG_R14W,
  XED_REG_R15W,
  XED_REG_EAX,
  XED_REG_ECX,
  XED_REG_EDX,
  XED_REG_EBX,
  XED_REG_ESP,
  XED_REG_EBP,
  XED_REG_ESI,
  XED_REG_EDI,
  XED_REG_R8D,
  XED_REG_R9D,
  XED_REG_R10D,
  XED_REG_R11D,
  XED_REG_R12D,
  XED_REG_R13D,
  XED_REG_R14D,
  XED_REG_R15D,
  XED_REG_RAX,
  XED_REG_RCX,
  XED_REG_RDX,
  XED_REG_RBX,
  XED_REG_RSP,
  XED_REG_RBP,
  XED_REG_RSI,
  XED_REG_RDI,
  XED_REG_R8,
  XED_REG_R9,
  XED_REG_R10,
  XED_REG_R11,
  XED_REG_R12,
  XED_REG_R13,
  XED_REG_R14,
  XED_REG_R15,
  XED_REG_AL,
  XED_REG_CL,
  XED_REG_DL,
  XED_REG_BL,
  XED_REG_SPL,
  XED_REG_BPL,
  XED_REG_SIL,
  XED_REG_DIL,
  XED_REG_R8B,
  XED_REG_R9B,
  XED_REG_R10B,
  XED_REG_R11B,
  XED_REG_R12B,
  XED_REG_R13B,
  XED_REG_R14B,
  XED_REG_R15B,
  XED_REG_AH,
  XED_REG_CH,
  XED_REG_DH,
  XED_REG_BH,
  XED_REG_ERROR,
  XED_REG_RIP,
  XED_REG_EIP,
  XED_REG_IP,
  XED_REG_K0,
  XED_REG_K1,
  XED_REG_K2,
  XED_REG_K3,
  XED_REG_K4,
  XED_REG_K5,
  XED_REG_K6,
  XED_REG_K7,
  XED_REG_MMX0,
  XED_REG_MMX1,
  XED_REG_MMX2,
  XED_REG_MMX3,
  XED_REG_MMX4,
  XED_REG_MMX5,
  XED_REG_MMX6,
  XED_REG_MMX7,
  XED_REG_SSP,
  XED_REG_IA32_U_CET,
  XED_REG_MXCSR,
  XED_REG_STACKPUSH,
  XED_REG_STACKPOP,
  XED_REG_GDTR,
  XED_REG_LDTR,
  XED_REG_IDTR,
  XED_REG_TR,
  XED_REG_TSC,
  XED_REG_TSCAUX,
  XED_REG_MSRS,
  XED_REG_FSBASE,
  XED_REG_GSBASE,
  XED_REG_X87CONTROL,
  XED_REG_X87STATUS,
  XED_REG_X87TAG,
  XED_REG_X87PUSH,
  XED_REG_X87POP,
  XED_REG_X87POP2,
  XED_REG_X87OPCODE,
  XED_REG_X87LASTCS,
  XED_REG_X87LASTIP,
  XED_REG_X87LASTDS,
  XED_REG_X87LASTDP,
  XED_REG_ES,
  XED_REG_CS,
  XED_REG_SS,
  XED_REG_DS,
  XED_REG_FS,
  XED_REG_GS,
  XED_REG_TMP0,
  XED_REG_TMP1,
  XED_REG_TMP2,
  XED_REG_TMP3,
  XED_REG_TMP4,
  XED_REG_TMP5,
  XED_REG_TMP6,
  XED_REG_TMP7,
  XED_REG_TMP8,
  XED_REG_TMP9,
  XED_REG_TMP10,
  XED_REG_TMP11,
  XED_REG_TMP12,
  XED_REG_TMP13,
  XED_REG_TMP14,
  XED_REG_TMP15,
  XED_REG_ST0,
  XED_REG_ST1,
  XED_REG_ST2,
  XED_REG_ST3,
  XED_REG_ST4,
  XED_REG_ST5,
  XED_REG_ST6,
  XED_REG_ST7,
  XED_REG_XCR0,
  XED_REG_XMM0,
  XED_REG_XMM1,
  XED_REG_XMM2,
  XED_REG_XMM3,
  XED_REG_XMM4,
  XED_REG_XMM5,
  XED_REG_XMM6,
  XED_REG_XMM7,
  XED_REG_XMM8,
  XED_REG_XMM9,
  XED_REG_XMM10,
  XED_REG_XMM11,
  XED_REG_XMM12,
  XED_REG_XMM13,
  XED_REG_XMM14,
  XED_REG_XMM15,
  XED_REG_XMM16,
  XED_REG_XMM17,
  XED_REG_XMM18,
  XED_REG_XMM19,
  XED_REG_XMM20,
  XED_REG_XMM21,
  XED_REG_XMM22,
  XED_REG_XMM23,
  XED_REG_XMM24,
  XED_REG_XMM25,
  XED_REG_XMM26,
  XED_REG_XMM27,
  XED_REG_XMM28,
  XED_REG_XMM29,
  XED_REG_XMM30,
  XED_REG_XMM31,
  XED_REG_YMM0,
  XED_REG_YMM1,
  XED_REG_YMM2,
  XED_REG_YMM3,
  XED_REG_YMM4,
  XED_REG_YMM5,
  XED_REG_YMM6,
  XED_REG_YMM7,
  XED_REG_YMM8,
  XED_REG_YMM9,
  XED_REG_YMM10,
  XED_REG_YMM11,
  XED_REG_YMM12,
  XED_REG_YMM13,
  XED_REG_YMM14,
  XED_REG_YMM15,
  XED_REG_YMM16,
  XED_REG_YMM17,
  XED_REG_YMM18,
  XED_REG_YMM19,
  XED_REG_YMM20,
  XED_REG_YMM21,
  XED_REG_YMM22,
  XED_REG_YMM23,
  XED_REG_YMM24,
  XED_REG_YMM25,
  XED_REG_YMM26,
  XED_REG_YMM27,
  XED_REG_YMM28,
  XED_REG_YMM29,
  XED_REG_YMM30,
  XED_REG_YMM31,
  XED_REG_ZMM0,
  XED_REG_ZMM1,
  XED_REG_ZMM2,
  XED_REG_ZMM3,
  XED_REG_ZMM4,
  XED_REG_ZMM5,
  XED_REG_ZMM6,
  XED_REG_ZMM7,
  XED_REG_ZMM8,
  XED_REG_ZMM9,
  XED_REG_ZMM10,
  XED_REG_ZMM11,
  XED_REG_ZMM12,
  XED_REG_ZMM13,
  XED_REG_ZMM14,
  XED_REG_ZMM15,
  XED_REG_ZMM16,
  XED_REG_ZMM17,
  XED_REG_ZMM18,
  XED_REG_ZMM19,
  XED_REG_ZMM20,
  XED_REG_ZMM21,
  XED_REG_ZMM22,
  XED_REG_ZMM23,
  XED_REG_ZMM24,
  XED_REG_ZMM25,
  XED_REG_ZMM26,
  XED_REG_ZMM27,
  XED_REG_ZMM28,
  XED_REG_ZMM29,
  XED_REG_ZMM30,
  XED_REG_ZMM31,
  XED_REG_LAST,
  XED_REG_BNDCFG_FIRST=XED_REG_BNDCFGU, //< PSEUDO
  XED_REG_BNDCFG_LAST=XED_REG_BNDCFGU, //<PSEUDO
  XED_REG_BNDSTAT_FIRST=XED_REG_BNDSTATUS, //< PSEUDO
  XED_REG_BNDSTAT_LAST=XED_REG_BNDSTATUS, //<PSEUDO
  XED_REG_BOUND_FIRST=XED_REG_BND0, //< PSEUDO
  XED_REG_BOUND_LAST=XED_REG_BND3, //<PSEUDO
  XED_REG_CR_FIRST=XED_REG_CR0, //< PSEUDO
  XED_REG_CR_LAST=XED_REG_CR15, //<PSEUDO
  XED_REG_DR_FIRST=XED_REG_DR0, //< PSEUDO
  XED_REG_DR_LAST=XED_REG_DR7, //<PSEUDO
  XED_REG_FLAGS_FIRST=XED_REG_FLAGS, //< PSEUDO
  XED_REG_FLAGS_LAST=XED_REG_RFLAGS, //<PSEUDO
  XED_REG_GPR16_FIRST=XED_REG_AX, //< PSEUDO
  XED_REG_GPR16_LAST=XED_REG_R15W, //<PSEUDO
  XED_REG_GPR32_FIRST=XED_REG_EAX, //< PSEUDO
  XED_REG_GPR32_LAST=XED_REG_R15D, //<PSEUDO
  XED_REG_GPR64_FIRST=XED_REG_RAX, //< PSEUDO
  XED_REG_GPR64_LAST=XED_REG_R15, //<PSEUDO
  XED_REG_GPR8_FIRST=XED_REG_AL, //< PSEUDO
  XED_REG_GPR8_LAST=XED_REG_R15B, //<PSEUDO
  XED_REG_GPR8h_FIRST=XED_REG_AH, //< PSEUDO
  XED_REG_GPR8h_LAST=XED_REG_BH, //<PSEUDO
  XED_REG_INVALID_FIRST=XED_REG_INVALID, //< PSEUDO
  XED_REG_INVALID_LAST=XED_REG_ERROR, //<PSEUDO
  XED_REG_IP_FIRST=XED_REG_RIP, //< PSEUDO
  XED_REG_IP_LAST=XED_REG_IP, //<PSEUDO
  XED_REG_MASK_FIRST=XED_REG_K0, //< PSEUDO
  XED_REG_MASK_LAST=XED_REG_K7, //<PSEUDO
  XED_REG_MMX_FIRST=XED_REG_MMX0, //< PSEUDO
  XED_REG_MMX_LAST=XED_REG_MMX7, //<PSEUDO
  XED_REG_MSR_FIRST=XED_REG_SSP, //< PSEUDO
  XED_REG_MSR_LAST=XED_REG_IA32_U_CET, //<PSEUDO
  XED_REG_MXCSR_FIRST=XED_REG_MXCSR, //< PSEUDO
  XED_REG_MXCSR_LAST=XED_REG_MXCSR, //<PSEUDO
  XED_REG_PSEUDO_FIRST=XED_REG_STACKPUSH, //< PSEUDO
  XED_REG_PSEUDO_LAST=XED_REG_GSBASE, //<PSEUDO
  XED_REG_PSEUDOX87_FIRST=XED_REG_X87CONTROL, //< PSEUDO
  XED_REG_PSEUDOX87_LAST=XED_REG_X87LASTDP, //<PSEUDO
  XED_REG_SR_FIRST=XED_REG_ES, //< PSEUDO
  XED_REG_SR_LAST=XED_REG_GS, //<PSEUDO
  XED_REG_TMP_FIRST=XED_REG_TMP0, //< PSEUDO
  XED_REG_TMP_LAST=XED_REG_TMP15, //<PSEUDO
  XED_REG_X87_FIRST=XED_REG_ST0, //< PSEUDO
  XED_REG_X87_LAST=XED_REG_ST7, //<PSEUDO
  XED_REG_XCR_FIRST=XED_REG_XCR0, //< PSEUDO
  XED_REG_XCR_LAST=XED_REG_XCR0, //<PSEUDO
  XED_REG_XMM_FIRST=XED_REG_XMM0, //< PSEUDO
  XED_REG_XMM_LAST=XED_REG_XMM31, //<PSEUDO
  XED_REG_YMM_FIRST=XED_REG_YMM0, //< PSEUDO
  XED_REG_YMM_LAST=XED_REG_YMM31, //<PSEUDO
  XED_REG_ZMM_FIRST=XED_REG_ZMM0, //< PSEUDO
  XED_REG_ZMM_LAST=XED_REG_ZMM31 //<PSEUDO
} xed_reg_enum_t;

/// This converts strings to #xed_reg_enum_t types.
/// @param s A C-string.
/// @return #xed_reg_enum_t
/// @ingroup ENUM
XED_DLL_EXPORT xed_reg_enum_t str2xed_reg_enum_t(const char* s);
/// This converts strings to #xed_reg_enum_t types.
/// @param p An enumeration element of type xed_reg_enum_t.
/// @return string
/// @ingroup ENUM
XED_DLL_EXPORT const char* xed_reg_enum_t2str(const xed_reg_enum_t p);

/// Returns the last element of the enumeration
/// @return xed_reg_enum_t The last element of the enumeration.
/// @ingroup ENUM
XED_DLL_EXPORT xed_reg_enum_t xed_reg_enum_t_last(void);
#endif