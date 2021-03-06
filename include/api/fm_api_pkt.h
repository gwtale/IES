/* vim:ts=4:sw=4:expandtab
 * (No tabs, indent level is 4 spaces)  */
/*****************************************************************************
 * File:            fm_api_pkt.h
 * Creation Date:   May 15, 2007
 * Description:     Functions for dealing with packets
 *
 * Copyright (c) 2005 - 2013, Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Intel Corporation nor the names of its contributors
 *       may be used to endorse or promote products derived from this software
 *       without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*****************************************************************************/

#ifndef __FM_FM_API_PKT_H
#define __FM_FM_API_PKT_H

fm_status fmSendPacketExt(fm_int sw, fm_packetInfo *info, fm_buffer *pkt);
fm_status fmSendPacket(fm_int sw, fm_int destMask, fm_buffer *pkt);
fm_status fmSendPacketDirected(fm_int     sw,
                               fm_int *   portList,
                               fm_int     numPorts,
                               fm_buffer *pkt);
fm_status fmSendPacketDirectedV2(fm_int           sw, 
                                 fm_int *         portList, 
                                 fm_int           numPorts,
                                 fm_buffer *      pkt,
                                 fm_packetInfoV2 *info);
fm_status fmSendPacketSwitched(fm_int sw, fm_buffer *pkt);
fm_status fmSendPacketSwitchedOnward(fm_int     sw, 
                                     fm_int     srcPort, 
                                     fm_int     vlan,
                                     fm_buffer *pkt);
fm_status fmSendPacketISL(fm_int          sw,
                          fm_uint32 *     islTag,
                          fm_islTagFormat islTagFormat,
                          fm_buffer *     pkt);

#endif /* __FM_FM_API_PKT_H */
