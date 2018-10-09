#ifndef SIGNATURE_H
#define SIGNATURE_H

#include "th-7ktos.h"

/*----------------------------------------------------------------------------
   définition des rangs pour la signature
  ----------------------------------------------------------------------------*/

#define RKTOS   1
#define RKSTS   2
#define RKFOS   3
#define RKARC   4
#define RKSFC   5
#define RKSEC   6
#define RKTAC   7
#define RKVLC   8
#define RKDNC   9
#define RKBNC  10
#define RKCOC  11
#define RKRAC  12
#define RKCVC  13
#define RKTVC  14
#define RKCAC  15
#define RKREC  16
#define RKDEC  17



/*----------------------------------------------------------------------------
   définition des identifiants externes pour la signature
  ----------------------------------------------------------------------------*/

#define MILLESIME "7"
#define KTOS_D    "B"
#define KSTS_D    "E"
#define KFOS_D    "B"
#define KARC_D    "C"
#define KSFC_V    "B"
#define KSEC_V    "B"
#define KTAC_V    "C"
#define KVLC_V    "B"
#define KDNC_D    "B"
#define KBNC_V    "D"
#define KCOC_V    "B"
#define KRAC_V    "B"
#define KCVC_V    "B"
#define KTVC_V    "B"
#define KCAC_V    "D"
#define KREC_V    "B"
#define KDEC_D    "B"



/*----------------------------------------------------------------------------
   voici la signature
  ----------------------------------------------------------------------------*/
#define SIGNATURE \
MILLESIME \
KTOS_D \
KSTS_D \
KFOS_D \
KARC_D \
KSFC_V \
KSEC_V \
KTAC_V \
KVLC_V \
KDNC_D \
KBNC_V \
KCOC_V \
KRAC_V \
KCVC_V \
KTVC_V \
KCAC_V \
KREC_V \
KDEC_D

extern s_signature la_signature;
#endif
