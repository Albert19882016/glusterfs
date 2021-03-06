/*Copyright (c) 2015 Red Hat, Inc. <http://www.redhat.com>
  This file is part of GlusterFS.

  This file is licensed to you under your choice of the GNU Lesser
  General Public License, version 3 or any later version (LGPLv3 or
  later), or the GNU General Public License, version 2 (GPLv2), in all
  cases as published by the Free Software Foundation.
*/

#ifndef _SYMLINK_CACHE_MESSAGES_H_
#define _SYMLINK_CACHE_MESSAGES_H_

#include <glusterfs/glfs-message-id.h>

/* To add new message IDs, append new identifiers at the end of the list.
 *
 * Never remove a message ID. If it's not used anymore, you can rename it or
 * leave it as it is, but not delete it. This is to prevent reutilization of
 * IDs by other messages.
 *
 * The component name must match one of the entries defined in
 * glfs-message-id.h.
 */

GLFS_MSGID(SYMLINK_CACHE, SYMLINK_CACHE_MSG_XLATOR_CHILD_MISCONFIGURED,
           SYMLINK_CACHE_MSG_VOL_MISCONFIGURED, SYMLINK_CACHE_MSG_NO_MEMORY,
           SYMLINK_CACHE_MSG_DICT_GET_FAILED,
           SYMLINK_CACHE_MSG_DICT_SET_FAILED);

#endif /* _SYMLINK_CACHE_MESSAGES_H_ */
