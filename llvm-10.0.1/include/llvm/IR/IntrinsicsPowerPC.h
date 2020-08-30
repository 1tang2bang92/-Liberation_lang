/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Intrinsic Function Source Fragment                                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifndef LLVM_IR_INTRINSIC_PPC_ENUMS_H
#define LLVM_IR_INTRINSIC_PPC_ENUMS_H

namespace llvm {
namespace Intrinsic {
enum PPCIntrinsics : unsigned {
// Enum values for intrinsics
    ppc_addf128_round_to_odd = 5598,                  // llvm.ppc.addf128.round.to.odd
    ppc_altivec_crypto_vcipher,                // llvm.ppc.altivec.crypto.vcipher
    ppc_altivec_crypto_vcipherlast,            // llvm.ppc.altivec.crypto.vcipherlast
    ppc_altivec_crypto_vncipher,               // llvm.ppc.altivec.crypto.vncipher
    ppc_altivec_crypto_vncipherlast,           // llvm.ppc.altivec.crypto.vncipherlast
    ppc_altivec_crypto_vpermxor,               // llvm.ppc.altivec.crypto.vpermxor
    ppc_altivec_crypto_vpmsumb,                // llvm.ppc.altivec.crypto.vpmsumb
    ppc_altivec_crypto_vpmsumd,                // llvm.ppc.altivec.crypto.vpmsumd
    ppc_altivec_crypto_vpmsumh,                // llvm.ppc.altivec.crypto.vpmsumh
    ppc_altivec_crypto_vpmsumw,                // llvm.ppc.altivec.crypto.vpmsumw
    ppc_altivec_crypto_vsbox,                  // llvm.ppc.altivec.crypto.vsbox
    ppc_altivec_crypto_vshasigmad,             // llvm.ppc.altivec.crypto.vshasigmad
    ppc_altivec_crypto_vshasigmaw,             // llvm.ppc.altivec.crypto.vshasigmaw
    ppc_altivec_dss,                           // llvm.ppc.altivec.dss
    ppc_altivec_dssall,                        // llvm.ppc.altivec.dssall
    ppc_altivec_dst,                           // llvm.ppc.altivec.dst
    ppc_altivec_dstst,                         // llvm.ppc.altivec.dstst
    ppc_altivec_dststt,                        // llvm.ppc.altivec.dststt
    ppc_altivec_dstt,                          // llvm.ppc.altivec.dstt
    ppc_altivec_lvebx,                         // llvm.ppc.altivec.lvebx
    ppc_altivec_lvehx,                         // llvm.ppc.altivec.lvehx
    ppc_altivec_lvewx,                         // llvm.ppc.altivec.lvewx
    ppc_altivec_lvsl,                          // llvm.ppc.altivec.lvsl
    ppc_altivec_lvsr,                          // llvm.ppc.altivec.lvsr
    ppc_altivec_lvx,                           // llvm.ppc.altivec.lvx
    ppc_altivec_lvxl,                          // llvm.ppc.altivec.lvxl
    ppc_altivec_mfvscr,                        // llvm.ppc.altivec.mfvscr
    ppc_altivec_mtvscr,                        // llvm.ppc.altivec.mtvscr
    ppc_altivec_stvebx,                        // llvm.ppc.altivec.stvebx
    ppc_altivec_stvehx,                        // llvm.ppc.altivec.stvehx
    ppc_altivec_stvewx,                        // llvm.ppc.altivec.stvewx
    ppc_altivec_stvx,                          // llvm.ppc.altivec.stvx
    ppc_altivec_stvxl,                         // llvm.ppc.altivec.stvxl
    ppc_altivec_vabsdub,                       // llvm.ppc.altivec.vabsdub
    ppc_altivec_vabsduh,                       // llvm.ppc.altivec.vabsduh
    ppc_altivec_vabsduw,                       // llvm.ppc.altivec.vabsduw
    ppc_altivec_vaddcuq,                       // llvm.ppc.altivec.vaddcuq
    ppc_altivec_vaddcuw,                       // llvm.ppc.altivec.vaddcuw
    ppc_altivec_vaddecuq,                      // llvm.ppc.altivec.vaddecuq
    ppc_altivec_vaddeuqm,                      // llvm.ppc.altivec.vaddeuqm
    ppc_altivec_vaddsbs,                       // llvm.ppc.altivec.vaddsbs
    ppc_altivec_vaddshs,                       // llvm.ppc.altivec.vaddshs
    ppc_altivec_vaddsws,                       // llvm.ppc.altivec.vaddsws
    ppc_altivec_vaddubs,                       // llvm.ppc.altivec.vaddubs
    ppc_altivec_vadduhs,                       // llvm.ppc.altivec.vadduhs
    ppc_altivec_vadduws,                       // llvm.ppc.altivec.vadduws
    ppc_altivec_vavgsb,                        // llvm.ppc.altivec.vavgsb
    ppc_altivec_vavgsh,                        // llvm.ppc.altivec.vavgsh
    ppc_altivec_vavgsw,                        // llvm.ppc.altivec.vavgsw
    ppc_altivec_vavgub,                        // llvm.ppc.altivec.vavgub
    ppc_altivec_vavguh,                        // llvm.ppc.altivec.vavguh
    ppc_altivec_vavguw,                        // llvm.ppc.altivec.vavguw
    ppc_altivec_vbpermq,                       // llvm.ppc.altivec.vbpermq
    ppc_altivec_vcfsx,                         // llvm.ppc.altivec.vcfsx
    ppc_altivec_vcfux,                         // llvm.ppc.altivec.vcfux
    ppc_altivec_vclzlsbb,                      // llvm.ppc.altivec.vclzlsbb
    ppc_altivec_vcmpbfp,                       // llvm.ppc.altivec.vcmpbfp
    ppc_altivec_vcmpbfp_p,                     // llvm.ppc.altivec.vcmpbfp.p
    ppc_altivec_vcmpeqfp,                      // llvm.ppc.altivec.vcmpeqfp
    ppc_altivec_vcmpeqfp_p,                    // llvm.ppc.altivec.vcmpeqfp.p
    ppc_altivec_vcmpequb,                      // llvm.ppc.altivec.vcmpequb
    ppc_altivec_vcmpequb_p,                    // llvm.ppc.altivec.vcmpequb.p
    ppc_altivec_vcmpequd,                      // llvm.ppc.altivec.vcmpequd
    ppc_altivec_vcmpequd_p,                    // llvm.ppc.altivec.vcmpequd.p
    ppc_altivec_vcmpequh,                      // llvm.ppc.altivec.vcmpequh
    ppc_altivec_vcmpequh_p,                    // llvm.ppc.altivec.vcmpequh.p
    ppc_altivec_vcmpequw,                      // llvm.ppc.altivec.vcmpequw
    ppc_altivec_vcmpequw_p,                    // llvm.ppc.altivec.vcmpequw.p
    ppc_altivec_vcmpgefp,                      // llvm.ppc.altivec.vcmpgefp
    ppc_altivec_vcmpgefp_p,                    // llvm.ppc.altivec.vcmpgefp.p
    ppc_altivec_vcmpgtfp,                      // llvm.ppc.altivec.vcmpgtfp
    ppc_altivec_vcmpgtfp_p,                    // llvm.ppc.altivec.vcmpgtfp.p
    ppc_altivec_vcmpgtsb,                      // llvm.ppc.altivec.vcmpgtsb
    ppc_altivec_vcmpgtsb_p,                    // llvm.ppc.altivec.vcmpgtsb.p
    ppc_altivec_vcmpgtsd,                      // llvm.ppc.altivec.vcmpgtsd
    ppc_altivec_vcmpgtsd_p,                    // llvm.ppc.altivec.vcmpgtsd.p
    ppc_altivec_vcmpgtsh,                      // llvm.ppc.altivec.vcmpgtsh
    ppc_altivec_vcmpgtsh_p,                    // llvm.ppc.altivec.vcmpgtsh.p
    ppc_altivec_vcmpgtsw,                      // llvm.ppc.altivec.vcmpgtsw
    ppc_altivec_vcmpgtsw_p,                    // llvm.ppc.altivec.vcmpgtsw.p
    ppc_altivec_vcmpgtub,                      // llvm.ppc.altivec.vcmpgtub
    ppc_altivec_vcmpgtub_p,                    // llvm.ppc.altivec.vcmpgtub.p
    ppc_altivec_vcmpgtud,                      // llvm.ppc.altivec.vcmpgtud
    ppc_altivec_vcmpgtud_p,                    // llvm.ppc.altivec.vcmpgtud.p
    ppc_altivec_vcmpgtuh,                      // llvm.ppc.altivec.vcmpgtuh
    ppc_altivec_vcmpgtuh_p,                    // llvm.ppc.altivec.vcmpgtuh.p
    ppc_altivec_vcmpgtuw,                      // llvm.ppc.altivec.vcmpgtuw
    ppc_altivec_vcmpgtuw_p,                    // llvm.ppc.altivec.vcmpgtuw.p
    ppc_altivec_vcmpneb,                       // llvm.ppc.altivec.vcmpneb
    ppc_altivec_vcmpneb_p,                     // llvm.ppc.altivec.vcmpneb.p
    ppc_altivec_vcmpneh,                       // llvm.ppc.altivec.vcmpneh
    ppc_altivec_vcmpneh_p,                     // llvm.ppc.altivec.vcmpneh.p
    ppc_altivec_vcmpnew,                       // llvm.ppc.altivec.vcmpnew
    ppc_altivec_vcmpnew_p,                     // llvm.ppc.altivec.vcmpnew.p
    ppc_altivec_vcmpnezb,                      // llvm.ppc.altivec.vcmpnezb
    ppc_altivec_vcmpnezb_p,                    // llvm.ppc.altivec.vcmpnezb.p
    ppc_altivec_vcmpnezh,                      // llvm.ppc.altivec.vcmpnezh
    ppc_altivec_vcmpnezh_p,                    // llvm.ppc.altivec.vcmpnezh.p
    ppc_altivec_vcmpnezw,                      // llvm.ppc.altivec.vcmpnezw
    ppc_altivec_vcmpnezw_p,                    // llvm.ppc.altivec.vcmpnezw.p
    ppc_altivec_vctsxs,                        // llvm.ppc.altivec.vctsxs
    ppc_altivec_vctuxs,                        // llvm.ppc.altivec.vctuxs
    ppc_altivec_vctzlsbb,                      // llvm.ppc.altivec.vctzlsbb
    ppc_altivec_vexptefp,                      // llvm.ppc.altivec.vexptefp
    ppc_altivec_vgbbd,                         // llvm.ppc.altivec.vgbbd
    ppc_altivec_vlogefp,                       // llvm.ppc.altivec.vlogefp
    ppc_altivec_vmaddfp,                       // llvm.ppc.altivec.vmaddfp
    ppc_altivec_vmaxfp,                        // llvm.ppc.altivec.vmaxfp
    ppc_altivec_vmaxsb,                        // llvm.ppc.altivec.vmaxsb
    ppc_altivec_vmaxsd,                        // llvm.ppc.altivec.vmaxsd
    ppc_altivec_vmaxsh,                        // llvm.ppc.altivec.vmaxsh
    ppc_altivec_vmaxsw,                        // llvm.ppc.altivec.vmaxsw
    ppc_altivec_vmaxub,                        // llvm.ppc.altivec.vmaxub
    ppc_altivec_vmaxud,                        // llvm.ppc.altivec.vmaxud
    ppc_altivec_vmaxuh,                        // llvm.ppc.altivec.vmaxuh
    ppc_altivec_vmaxuw,                        // llvm.ppc.altivec.vmaxuw
    ppc_altivec_vmhaddshs,                     // llvm.ppc.altivec.vmhaddshs
    ppc_altivec_vmhraddshs,                    // llvm.ppc.altivec.vmhraddshs
    ppc_altivec_vminfp,                        // llvm.ppc.altivec.vminfp
    ppc_altivec_vminsb,                        // llvm.ppc.altivec.vminsb
    ppc_altivec_vminsd,                        // llvm.ppc.altivec.vminsd
    ppc_altivec_vminsh,                        // llvm.ppc.altivec.vminsh
    ppc_altivec_vminsw,                        // llvm.ppc.altivec.vminsw
    ppc_altivec_vminub,                        // llvm.ppc.altivec.vminub
    ppc_altivec_vminud,                        // llvm.ppc.altivec.vminud
    ppc_altivec_vminuh,                        // llvm.ppc.altivec.vminuh
    ppc_altivec_vminuw,                        // llvm.ppc.altivec.vminuw
    ppc_altivec_vmladduhm,                     // llvm.ppc.altivec.vmladduhm
    ppc_altivec_vmsummbm,                      // llvm.ppc.altivec.vmsummbm
    ppc_altivec_vmsumshm,                      // llvm.ppc.altivec.vmsumshm
    ppc_altivec_vmsumshs,                      // llvm.ppc.altivec.vmsumshs
    ppc_altivec_vmsumubm,                      // llvm.ppc.altivec.vmsumubm
    ppc_altivec_vmsumudm,                      // llvm.ppc.altivec.vmsumudm
    ppc_altivec_vmsumuhm,                      // llvm.ppc.altivec.vmsumuhm
    ppc_altivec_vmsumuhs,                      // llvm.ppc.altivec.vmsumuhs
    ppc_altivec_vmulesb,                       // llvm.ppc.altivec.vmulesb
    ppc_altivec_vmulesh,                       // llvm.ppc.altivec.vmulesh
    ppc_altivec_vmulesw,                       // llvm.ppc.altivec.vmulesw
    ppc_altivec_vmuleub,                       // llvm.ppc.altivec.vmuleub
    ppc_altivec_vmuleuh,                       // llvm.ppc.altivec.vmuleuh
    ppc_altivec_vmuleuw,                       // llvm.ppc.altivec.vmuleuw
    ppc_altivec_vmulosb,                       // llvm.ppc.altivec.vmulosb
    ppc_altivec_vmulosh,                       // llvm.ppc.altivec.vmulosh
    ppc_altivec_vmulosw,                       // llvm.ppc.altivec.vmulosw
    ppc_altivec_vmuloub,                       // llvm.ppc.altivec.vmuloub
    ppc_altivec_vmulouh,                       // llvm.ppc.altivec.vmulouh
    ppc_altivec_vmulouw,                       // llvm.ppc.altivec.vmulouw
    ppc_altivec_vnmsubfp,                      // llvm.ppc.altivec.vnmsubfp
    ppc_altivec_vperm,                         // llvm.ppc.altivec.vperm
    ppc_altivec_vpkpx,                         // llvm.ppc.altivec.vpkpx
    ppc_altivec_vpksdss,                       // llvm.ppc.altivec.vpksdss
    ppc_altivec_vpksdus,                       // llvm.ppc.altivec.vpksdus
    ppc_altivec_vpkshss,                       // llvm.ppc.altivec.vpkshss
    ppc_altivec_vpkshus,                       // llvm.ppc.altivec.vpkshus
    ppc_altivec_vpkswss,                       // llvm.ppc.altivec.vpkswss
    ppc_altivec_vpkswus,                       // llvm.ppc.altivec.vpkswus
    ppc_altivec_vpkudus,                       // llvm.ppc.altivec.vpkudus
    ppc_altivec_vpkuhus,                       // llvm.ppc.altivec.vpkuhus
    ppc_altivec_vpkuwus,                       // llvm.ppc.altivec.vpkuwus
    ppc_altivec_vprtybd,                       // llvm.ppc.altivec.vprtybd
    ppc_altivec_vprtybq,                       // llvm.ppc.altivec.vprtybq
    ppc_altivec_vprtybw,                       // llvm.ppc.altivec.vprtybw
    ppc_altivec_vrefp,                         // llvm.ppc.altivec.vrefp
    ppc_altivec_vrfim,                         // llvm.ppc.altivec.vrfim
    ppc_altivec_vrfin,                         // llvm.ppc.altivec.vrfin
    ppc_altivec_vrfip,                         // llvm.ppc.altivec.vrfip
    ppc_altivec_vrfiz,                         // llvm.ppc.altivec.vrfiz
    ppc_altivec_vrlb,                          // llvm.ppc.altivec.vrlb
    ppc_altivec_vrld,                          // llvm.ppc.altivec.vrld
    ppc_altivec_vrldmi,                        // llvm.ppc.altivec.vrldmi
    ppc_altivec_vrldnm,                        // llvm.ppc.altivec.vrldnm
    ppc_altivec_vrlh,                          // llvm.ppc.altivec.vrlh
    ppc_altivec_vrlw,                          // llvm.ppc.altivec.vrlw
    ppc_altivec_vrlwmi,                        // llvm.ppc.altivec.vrlwmi
    ppc_altivec_vrlwnm,                        // llvm.ppc.altivec.vrlwnm
    ppc_altivec_vrsqrtefp,                     // llvm.ppc.altivec.vrsqrtefp
    ppc_altivec_vsel,                          // llvm.ppc.altivec.vsel
    ppc_altivec_vsl,                           // llvm.ppc.altivec.vsl
    ppc_altivec_vslb,                          // llvm.ppc.altivec.vslb
    ppc_altivec_vslh,                          // llvm.ppc.altivec.vslh
    ppc_altivec_vslo,                          // llvm.ppc.altivec.vslo
    ppc_altivec_vslv,                          // llvm.ppc.altivec.vslv
    ppc_altivec_vslw,                          // llvm.ppc.altivec.vslw
    ppc_altivec_vsr,                           // llvm.ppc.altivec.vsr
    ppc_altivec_vsrab,                         // llvm.ppc.altivec.vsrab
    ppc_altivec_vsrah,                         // llvm.ppc.altivec.vsrah
    ppc_altivec_vsraw,                         // llvm.ppc.altivec.vsraw
    ppc_altivec_vsrb,                          // llvm.ppc.altivec.vsrb
    ppc_altivec_vsrh,                          // llvm.ppc.altivec.vsrh
    ppc_altivec_vsro,                          // llvm.ppc.altivec.vsro
    ppc_altivec_vsrv,                          // llvm.ppc.altivec.vsrv
    ppc_altivec_vsrw,                          // llvm.ppc.altivec.vsrw
    ppc_altivec_vsubcuq,                       // llvm.ppc.altivec.vsubcuq
    ppc_altivec_vsubcuw,                       // llvm.ppc.altivec.vsubcuw
    ppc_altivec_vsubecuq,                      // llvm.ppc.altivec.vsubecuq
    ppc_altivec_vsubeuqm,                      // llvm.ppc.altivec.vsubeuqm
    ppc_altivec_vsubsbs,                       // llvm.ppc.altivec.vsubsbs
    ppc_altivec_vsubshs,                       // llvm.ppc.altivec.vsubshs
    ppc_altivec_vsubsws,                       // llvm.ppc.altivec.vsubsws
    ppc_altivec_vsububs,                       // llvm.ppc.altivec.vsububs
    ppc_altivec_vsubuhs,                       // llvm.ppc.altivec.vsubuhs
    ppc_altivec_vsubuws,                       // llvm.ppc.altivec.vsubuws
    ppc_altivec_vsum2sws,                      // llvm.ppc.altivec.vsum2sws
    ppc_altivec_vsum4sbs,                      // llvm.ppc.altivec.vsum4sbs
    ppc_altivec_vsum4shs,                      // llvm.ppc.altivec.vsum4shs
    ppc_altivec_vsum4ubs,                      // llvm.ppc.altivec.vsum4ubs
    ppc_altivec_vsumsws,                       // llvm.ppc.altivec.vsumsws
    ppc_altivec_vupkhpx,                       // llvm.ppc.altivec.vupkhpx
    ppc_altivec_vupkhsb,                       // llvm.ppc.altivec.vupkhsb
    ppc_altivec_vupkhsh,                       // llvm.ppc.altivec.vupkhsh
    ppc_altivec_vupkhsw,                       // llvm.ppc.altivec.vupkhsw
    ppc_altivec_vupklpx,                       // llvm.ppc.altivec.vupklpx
    ppc_altivec_vupklsb,                       // llvm.ppc.altivec.vupklsb
    ppc_altivec_vupklsh,                       // llvm.ppc.altivec.vupklsh
    ppc_altivec_vupklsw,                       // llvm.ppc.altivec.vupklsw
    ppc_bpermd,                                // llvm.ppc.bpermd
    ppc_cfence,                                // llvm.ppc.cfence
    ppc_dcba,                                  // llvm.ppc.dcba
    ppc_dcbf,                                  // llvm.ppc.dcbf
    ppc_dcbi,                                  // llvm.ppc.dcbi
    ppc_dcbst,                                 // llvm.ppc.dcbst
    ppc_dcbt,                                  // llvm.ppc.dcbt
    ppc_dcbtst,                                // llvm.ppc.dcbtst
    ppc_dcbz,                                  // llvm.ppc.dcbz
    ppc_dcbzl,                                 // llvm.ppc.dcbzl
    ppc_divde,                                 // llvm.ppc.divde
    ppc_divdeu,                                // llvm.ppc.divdeu
    ppc_divf128_round_to_odd,                  // llvm.ppc.divf128.round.to.odd
    ppc_divwe,                                 // llvm.ppc.divwe
    ppc_divweu,                                // llvm.ppc.divweu
    ppc_fmaf128_round_to_odd,                  // llvm.ppc.fmaf128.round.to.odd
    ppc_get_texasr,                            // llvm.ppc.get.texasr
    ppc_get_texasru,                           // llvm.ppc.get.texasru
    ppc_get_tfhar,                             // llvm.ppc.get.tfhar
    ppc_get_tfiar,                             // llvm.ppc.get.tfiar
    ppc_is_decremented_ctr_nonzero,            // llvm.ppc.is.decremented.ctr.nonzero
    ppc_lwsync,                                // llvm.ppc.lwsync
    ppc_mtctr,                                 // llvm.ppc.mtctr
    ppc_mulf128_round_to_odd,                  // llvm.ppc.mulf128.round.to.odd
    ppc_qpx_qvfabs,                            // llvm.ppc.qpx.qvfabs
    ppc_qpx_qvfadd,                            // llvm.ppc.qpx.qvfadd
    ppc_qpx_qvfadds,                           // llvm.ppc.qpx.qvfadds
    ppc_qpx_qvfcfid,                           // llvm.ppc.qpx.qvfcfid
    ppc_qpx_qvfcfids,                          // llvm.ppc.qpx.qvfcfids
    ppc_qpx_qvfcfidu,                          // llvm.ppc.qpx.qvfcfidu
    ppc_qpx_qvfcfidus,                         // llvm.ppc.qpx.qvfcfidus
    ppc_qpx_qvfcmpeq,                          // llvm.ppc.qpx.qvfcmpeq
    ppc_qpx_qvfcmpgt,                          // llvm.ppc.qpx.qvfcmpgt
    ppc_qpx_qvfcmplt,                          // llvm.ppc.qpx.qvfcmplt
    ppc_qpx_qvfcpsgn,                          // llvm.ppc.qpx.qvfcpsgn
    ppc_qpx_qvfctid,                           // llvm.ppc.qpx.qvfctid
    ppc_qpx_qvfctidu,                          // llvm.ppc.qpx.qvfctidu
    ppc_qpx_qvfctiduz,                         // llvm.ppc.qpx.qvfctiduz
    ppc_qpx_qvfctidz,                          // llvm.ppc.qpx.qvfctidz
    ppc_qpx_qvfctiw,                           // llvm.ppc.qpx.qvfctiw
    ppc_qpx_qvfctiwu,                          // llvm.ppc.qpx.qvfctiwu
    ppc_qpx_qvfctiwuz,                         // llvm.ppc.qpx.qvfctiwuz
    ppc_qpx_qvfctiwz,                          // llvm.ppc.qpx.qvfctiwz
    ppc_qpx_qvflogical,                        // llvm.ppc.qpx.qvflogical
    ppc_qpx_qvfmadd,                           // llvm.ppc.qpx.qvfmadd
    ppc_qpx_qvfmadds,                          // llvm.ppc.qpx.qvfmadds
    ppc_qpx_qvfmsub,                           // llvm.ppc.qpx.qvfmsub
    ppc_qpx_qvfmsubs,                          // llvm.ppc.qpx.qvfmsubs
    ppc_qpx_qvfmul,                            // llvm.ppc.qpx.qvfmul
    ppc_qpx_qvfmuls,                           // llvm.ppc.qpx.qvfmuls
    ppc_qpx_qvfnabs,                           // llvm.ppc.qpx.qvfnabs
    ppc_qpx_qvfneg,                            // llvm.ppc.qpx.qvfneg
    ppc_qpx_qvfnmadd,                          // llvm.ppc.qpx.qvfnmadd
    ppc_qpx_qvfnmadds,                         // llvm.ppc.qpx.qvfnmadds
    ppc_qpx_qvfnmsub,                          // llvm.ppc.qpx.qvfnmsub
    ppc_qpx_qvfnmsubs,                         // llvm.ppc.qpx.qvfnmsubs
    ppc_qpx_qvfperm,                           // llvm.ppc.qpx.qvfperm
    ppc_qpx_qvfre,                             // llvm.ppc.qpx.qvfre
    ppc_qpx_qvfres,                            // llvm.ppc.qpx.qvfres
    ppc_qpx_qvfrim,                            // llvm.ppc.qpx.qvfrim
    ppc_qpx_qvfrin,                            // llvm.ppc.qpx.qvfrin
    ppc_qpx_qvfrip,                            // llvm.ppc.qpx.qvfrip
    ppc_qpx_qvfriz,                            // llvm.ppc.qpx.qvfriz
    ppc_qpx_qvfrsp,                            // llvm.ppc.qpx.qvfrsp
    ppc_qpx_qvfrsqrte,                         // llvm.ppc.qpx.qvfrsqrte
    ppc_qpx_qvfrsqrtes,                        // llvm.ppc.qpx.qvfrsqrtes
    ppc_qpx_qvfsel,                            // llvm.ppc.qpx.qvfsel
    ppc_qpx_qvfsub,                            // llvm.ppc.qpx.qvfsub
    ppc_qpx_qvfsubs,                           // llvm.ppc.qpx.qvfsubs
    ppc_qpx_qvftstnan,                         // llvm.ppc.qpx.qvftstnan
    ppc_qpx_qvfxmadd,                          // llvm.ppc.qpx.qvfxmadd
    ppc_qpx_qvfxmadds,                         // llvm.ppc.qpx.qvfxmadds
    ppc_qpx_qvfxmul,                           // llvm.ppc.qpx.qvfxmul
    ppc_qpx_qvfxmuls,                          // llvm.ppc.qpx.qvfxmuls
    ppc_qpx_qvfxxcpnmadd,                      // llvm.ppc.qpx.qvfxxcpnmadd
    ppc_qpx_qvfxxcpnmadds,                     // llvm.ppc.qpx.qvfxxcpnmadds
    ppc_qpx_qvfxxmadd,                         // llvm.ppc.qpx.qvfxxmadd
    ppc_qpx_qvfxxmadds,                        // llvm.ppc.qpx.qvfxxmadds
    ppc_qpx_qvfxxnpmadd,                       // llvm.ppc.qpx.qvfxxnpmadd
    ppc_qpx_qvfxxnpmadds,                      // llvm.ppc.qpx.qvfxxnpmadds
    ppc_qpx_qvgpci,                            // llvm.ppc.qpx.qvgpci
    ppc_qpx_qvlfcd,                            // llvm.ppc.qpx.qvlfcd
    ppc_qpx_qvlfcda,                           // llvm.ppc.qpx.qvlfcda
    ppc_qpx_qvlfcs,                            // llvm.ppc.qpx.qvlfcs
    ppc_qpx_qvlfcsa,                           // llvm.ppc.qpx.qvlfcsa
    ppc_qpx_qvlfd,                             // llvm.ppc.qpx.qvlfd
    ppc_qpx_qvlfda,                            // llvm.ppc.qpx.qvlfda
    ppc_qpx_qvlfiwa,                           // llvm.ppc.qpx.qvlfiwa
    ppc_qpx_qvlfiwaa,                          // llvm.ppc.qpx.qvlfiwaa
    ppc_qpx_qvlfiwz,                           // llvm.ppc.qpx.qvlfiwz
    ppc_qpx_qvlfiwza,                          // llvm.ppc.qpx.qvlfiwza
    ppc_qpx_qvlfs,                             // llvm.ppc.qpx.qvlfs
    ppc_qpx_qvlfsa,                            // llvm.ppc.qpx.qvlfsa
    ppc_qpx_qvlpcld,                           // llvm.ppc.qpx.qvlpcld
    ppc_qpx_qvlpcls,                           // llvm.ppc.qpx.qvlpcls
    ppc_qpx_qvlpcrd,                           // llvm.ppc.qpx.qvlpcrd
    ppc_qpx_qvlpcrs,                           // llvm.ppc.qpx.qvlpcrs
    ppc_qpx_qvstfcd,                           // llvm.ppc.qpx.qvstfcd
    ppc_qpx_qvstfcda,                          // llvm.ppc.qpx.qvstfcda
    ppc_qpx_qvstfcs,                           // llvm.ppc.qpx.qvstfcs
    ppc_qpx_qvstfcsa,                          // llvm.ppc.qpx.qvstfcsa
    ppc_qpx_qvstfd,                            // llvm.ppc.qpx.qvstfd
    ppc_qpx_qvstfda,                           // llvm.ppc.qpx.qvstfda
    ppc_qpx_qvstfiw,                           // llvm.ppc.qpx.qvstfiw
    ppc_qpx_qvstfiwa,                          // llvm.ppc.qpx.qvstfiwa
    ppc_qpx_qvstfs,                            // llvm.ppc.qpx.qvstfs
    ppc_qpx_qvstfsa,                           // llvm.ppc.qpx.qvstfsa
    ppc_scalar_extract_expq,                   // llvm.ppc.scalar.extract.expq
    ppc_scalar_insert_exp_qp,                  // llvm.ppc.scalar.insert.exp.qp
    ppc_set_texasr,                            // llvm.ppc.set.texasr
    ppc_set_texasru,                           // llvm.ppc.set.texasru
    ppc_set_tfhar,                             // llvm.ppc.set.tfhar
    ppc_set_tfiar,                             // llvm.ppc.set.tfiar
    ppc_setrnd,                                // llvm.ppc.setrnd
    ppc_sqrtf128_round_to_odd,                 // llvm.ppc.sqrtf128.round.to.odd
    ppc_subf128_round_to_odd,                  // llvm.ppc.subf128.round.to.odd
    ppc_sync,                                  // llvm.ppc.sync
    ppc_tabort,                                // llvm.ppc.tabort
    ppc_tabortdc,                              // llvm.ppc.tabortdc
    ppc_tabortdci,                             // llvm.ppc.tabortdci
    ppc_tabortwc,                              // llvm.ppc.tabortwc
    ppc_tabortwci,                             // llvm.ppc.tabortwci
    ppc_tbegin,                                // llvm.ppc.tbegin
    ppc_tcheck,                                // llvm.ppc.tcheck
    ppc_tend,                                  // llvm.ppc.tend
    ppc_tendall,                               // llvm.ppc.tendall
    ppc_trechkpt,                              // llvm.ppc.trechkpt
    ppc_treclaim,                              // llvm.ppc.treclaim
    ppc_tresume,                               // llvm.ppc.tresume
    ppc_truncf128_round_to_odd,                // llvm.ppc.truncf128.round.to.odd
    ppc_tsr,                                   // llvm.ppc.tsr
    ppc_tsuspend,                              // llvm.ppc.tsuspend
    ppc_ttest,                                 // llvm.ppc.ttest
    ppc_vsx_lxvd2x,                            // llvm.ppc.vsx.lxvd2x
    ppc_vsx_lxvd2x_be,                         // llvm.ppc.vsx.lxvd2x.be
    ppc_vsx_lxvl,                              // llvm.ppc.vsx.lxvl
    ppc_vsx_lxvll,                             // llvm.ppc.vsx.lxvll
    ppc_vsx_lxvw4x,                            // llvm.ppc.vsx.lxvw4x
    ppc_vsx_lxvw4x_be,                         // llvm.ppc.vsx.lxvw4x.be
    ppc_vsx_stxvd2x,                           // llvm.ppc.vsx.stxvd2x
    ppc_vsx_stxvd2x_be,                        // llvm.ppc.vsx.stxvd2x.be
    ppc_vsx_stxvl,                             // llvm.ppc.vsx.stxvl
    ppc_vsx_stxvll,                            // llvm.ppc.vsx.stxvll
    ppc_vsx_stxvw4x,                           // llvm.ppc.vsx.stxvw4x
    ppc_vsx_stxvw4x_be,                        // llvm.ppc.vsx.stxvw4x.be
    ppc_vsx_xsmaxdp,                           // llvm.ppc.vsx.xsmaxdp
    ppc_vsx_xsmindp,                           // llvm.ppc.vsx.xsmindp
    ppc_vsx_xvcmpeqdp,                         // llvm.ppc.vsx.xvcmpeqdp
    ppc_vsx_xvcmpeqdp_p,                       // llvm.ppc.vsx.xvcmpeqdp.p
    ppc_vsx_xvcmpeqsp,                         // llvm.ppc.vsx.xvcmpeqsp
    ppc_vsx_xvcmpeqsp_p,                       // llvm.ppc.vsx.xvcmpeqsp.p
    ppc_vsx_xvcmpgedp,                         // llvm.ppc.vsx.xvcmpgedp
    ppc_vsx_xvcmpgedp_p,                       // llvm.ppc.vsx.xvcmpgedp.p
    ppc_vsx_xvcmpgesp,                         // llvm.ppc.vsx.xvcmpgesp
    ppc_vsx_xvcmpgesp_p,                       // llvm.ppc.vsx.xvcmpgesp.p
    ppc_vsx_xvcmpgtdp,                         // llvm.ppc.vsx.xvcmpgtdp
    ppc_vsx_xvcmpgtdp_p,                       // llvm.ppc.vsx.xvcmpgtdp.p
    ppc_vsx_xvcmpgtsp,                         // llvm.ppc.vsx.xvcmpgtsp
    ppc_vsx_xvcmpgtsp_p,                       // llvm.ppc.vsx.xvcmpgtsp.p
    ppc_vsx_xvcvdpsp,                          // llvm.ppc.vsx.xvcvdpsp
    ppc_vsx_xvcvdpsxws,                        // llvm.ppc.vsx.xvcvdpsxws
    ppc_vsx_xvcvdpuxws,                        // llvm.ppc.vsx.xvcvdpuxws
    ppc_vsx_xvcvhpsp,                          // llvm.ppc.vsx.xvcvhpsp
    ppc_vsx_xvcvspdp,                          // llvm.ppc.vsx.xvcvspdp
    ppc_vsx_xvcvsphp,                          // llvm.ppc.vsx.xvcvsphp
    ppc_vsx_xvcvsxdsp,                         // llvm.ppc.vsx.xvcvsxdsp
    ppc_vsx_xvcvsxwdp,                         // llvm.ppc.vsx.xvcvsxwdp
    ppc_vsx_xvcvuxdsp,                         // llvm.ppc.vsx.xvcvuxdsp
    ppc_vsx_xvcvuxwdp,                         // llvm.ppc.vsx.xvcvuxwdp
    ppc_vsx_xvdivdp,                           // llvm.ppc.vsx.xvdivdp
    ppc_vsx_xvdivsp,                           // llvm.ppc.vsx.xvdivsp
    ppc_vsx_xviexpdp,                          // llvm.ppc.vsx.xviexpdp
    ppc_vsx_xviexpsp,                          // llvm.ppc.vsx.xviexpsp
    ppc_vsx_xvmaxdp,                           // llvm.ppc.vsx.xvmaxdp
    ppc_vsx_xvmaxsp,                           // llvm.ppc.vsx.xvmaxsp
    ppc_vsx_xvmindp,                           // llvm.ppc.vsx.xvmindp
    ppc_vsx_xvminsp,                           // llvm.ppc.vsx.xvminsp
    ppc_vsx_xvrdpip,                           // llvm.ppc.vsx.xvrdpip
    ppc_vsx_xvredp,                            // llvm.ppc.vsx.xvredp
    ppc_vsx_xvresp,                            // llvm.ppc.vsx.xvresp
    ppc_vsx_xvrspip,                           // llvm.ppc.vsx.xvrspip
    ppc_vsx_xvrsqrtedp,                        // llvm.ppc.vsx.xvrsqrtedp
    ppc_vsx_xvrsqrtesp,                        // llvm.ppc.vsx.xvrsqrtesp
    ppc_vsx_xvtstdcdp,                         // llvm.ppc.vsx.xvtstdcdp
    ppc_vsx_xvtstdcsp,                         // llvm.ppc.vsx.xvtstdcsp
    ppc_vsx_xvxexpdp,                          // llvm.ppc.vsx.xvxexpdp
    ppc_vsx_xvxexpsp,                          // llvm.ppc.vsx.xvxexpsp
    ppc_vsx_xvxsigdp,                          // llvm.ppc.vsx.xvxsigdp
    ppc_vsx_xvxsigsp,                          // llvm.ppc.vsx.xvxsigsp
    ppc_vsx_xxextractuw,                       // llvm.ppc.vsx.xxextractuw
    ppc_vsx_xxinsertw,                         // llvm.ppc.vsx.xxinsertw
    ppc_vsx_xxleqv,                            // llvm.ppc.vsx.xxleqv
}; // enum
} // namespace Intrinsic
} // namespace llvm

#endif
