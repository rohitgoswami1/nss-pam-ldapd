/* 
   Copyright (C) 1997-2005 Luke Howard
   This file is part of the nss_ldap library.
   Contributed by Luke Howard, <lukeh@padl.com>, 1997.

   The nss_ldap library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The nss_ldap library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the nss_ldap library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.

   $Id$
*/

#ifndef _LDAP_NSS_LDAP_LDAP_RPC_H
#define _LDAP_NSS_LDAP_LDAP_RPC_H

/*
 * Determine the canonical name of the RPC with _nss_ldap_getrdnvalue(),
 * and assign any values of "cn" which do NOT match this canonical name
 * as aliases.
 */

static enum nss_status _nss_ldap_parse_rpc (LDAPMessage * e,
				       ldap_state_t * pvt,
				       void *result,
				       char *buffer, size_t buflen);

#endif /* _LDAP_NSS_LDAP_LDAP_RPC_H */
