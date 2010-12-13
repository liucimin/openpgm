/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.notify.conf,v 5.3 2004/04/15 12:29:19 dts12 Exp $
 */

#pragma once
#ifndef __PGM_IMPL_MIB_H__
#define __PGM_IMPL_MIB_H__

#include <impl/framework.h>

PGM_BEGIN_DECLS

/* function declarations */
PGM_GNUC_INTERNAL bool pgm_mib_init (pgm_error_t**);

PGM_GNUC_INTERNAL int send_pgmStart_trap(void);
PGM_GNUC_INTERNAL int send_pgmStop_trap(void);
PGM_GNUC_INTERNAL int send_pgmNewSourceTrap_trap(void);
PGM_GNUC_INTERNAL int send_pgmClosedSourceTrap_trap(void);
PGM_GNUC_INTERNAL int send_pgmNewReceiverTrap_trap(void);
PGM_GNUC_INTERNAL int send_pgmClosedReceiverTrap_trap(void);
PGM_GNUC_INTERNAL int send_pgmNakFailuresTrap_trap(void);
PGM_GNUC_INTERNAL int send_pgmNewDlrSourceTrap_trap(void);
PGM_GNUC_INTERNAL int send_pgmClosedDlrSourceTrap_trap(void);

PGM_END_DECLS

#endif /* __PGM_IMPL_MIB_H__ */
