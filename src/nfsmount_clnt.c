/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "config.h"
#if HAVE_NFS

#include "nfsmount.h"
/*
 * Sun RPC is a product of Sun Microsystems, Inc. and is provided for
 * unrestricted use provided that this legend is included on all tape
 * media and as a part of the software program in whole or part.  Users
 * may copy or modify Sun RPC without charge, but are not authorized
 * to license or distribute it to anyone else except as part of a product or
 * program developed by the user or with the express written consent of
 * Sun Microsystems, Inc.
 *
 * SUN RPC IS PROVIDED AS IS WITH NO WARRANTIES OF ANY KIND INCLUDING THE
 * WARRANTIES OF DESIGN, MERCHANTIBILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE, OR ARISING FROM A COURSE OF DEALING, USAGE OR TRADE PRACTICE.
 *
 * Sun RPC is provided with no support and without any obligation on the
 * part of Sun Microsystems, Inc. to assist in its use, correction,
 * modification or enhancement.
 *
 * SUN MICROSYSTEMS, INC. SHALL HAVE NO LIABILITY WITH RESPECT TO THE
 * INFRINGEMENT OF COPYRIGHTS, TRADE SECRETS OR ANY PATENTS BY SUN RPC
 * OR ANY PART THEREOF.
 *
 * In no event will Sun Microsystems, Inc. be liable for any lost revenue
 * or profits or other special, indirect and consequential damages, even if
 * Sun has been advised of the possibility of such damages.
 *
 * Sun Microsystems, Inc.
 * 2550 Garcia Avenue
 * Mountain View, California  94043
 */
/*
 * Copyright (c) 1985, 1990 by Sun Microsystems, Inc.
 */

/* from @(#)mount.x	1.3 91/03/11 TIRPC 1.0 */

#include <string.h>		/* for memset() */

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

void *mountproc_null_1(argp, clnt)
void *argp;
CLIENT *clnt;
{
	static char clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, MOUNTPROC_NULL, (xdrproc_t) xdr_void, argp, (xdrproc_t) xdr_void, &clnt_res, TIMEOUT) !=
	    RPC_SUCCESS) {
		return (NULL);
	}
	return ((void *)&clnt_res);
}

fhstatus *mountproc_mnt_1(argp, clnt)
dirpath *argp;
CLIENT *clnt;
{
	static fhstatus clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, MOUNTPROC_MNT, (xdrproc_t) xdr_dirpath,
		      (caddr_t) argp, (xdrproc_t) xdr_fhstatus, (caddr_t) & clnt_res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

mountlist *mountproc_dump_1(argp, clnt)
void *argp;
CLIENT *clnt;
{
	static mountlist clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, MOUNTPROC_DUMP, (xdrproc_t) xdr_void,
		      (caddr_t) argp, (xdrproc_t) xdr_mountlist, (caddr_t) & clnt_res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

void *mountproc_umnt_1(argp, clnt)
dirpath *argp;
CLIENT *clnt;
{
	static char clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, MOUNTPROC_UMNT, (xdrproc_t) xdr_dirpath,
		      (caddr_t) argp, (xdrproc_t) xdr_void, (caddr_t) & clnt_res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return ((void *)&clnt_res);
}

void *mountproc_umntall_1(argp, clnt)
void *argp;
CLIENT *clnt;
{
	static char clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, MOUNTPROC_UMNTALL, (xdrproc_t) xdr_void,
		      (caddr_t) argp, (xdrproc_t) xdr_void, (caddr_t) & clnt_res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return ((void *)&clnt_res);
}

exports *mountproc_export_1(argp, clnt)
void *argp;
CLIENT *clnt;
{
	static exports clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, MOUNTPROC_EXPORT, (xdrproc_t) xdr_void,
		      (caddr_t) argp, (xdrproc_t) xdr_exports, (caddr_t) & clnt_res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

exports *mountproc_exportall_1(argp, clnt)
void *argp;
CLIENT *clnt;
{
	static exports clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, MOUNTPROC_EXPORTALL, (xdrproc_t) xdr_void,
		      (caddr_t) argp, (xdrproc_t) xdr_exports, (caddr_t) & clnt_res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

void *mountproc_null_2(argp, clnt)
void *argp;
CLIENT *clnt;
{
	static char clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, MOUNTPROC_NULL, (xdrproc_t) xdr_void, argp, (xdrproc_t) xdr_void, &clnt_res, TIMEOUT) !=
	    RPC_SUCCESS) {
		return (NULL);
	}
	return ((void *)&clnt_res);
}

fhstatus *mountproc_mnt_2(argp, clnt)
dirpath *argp;
CLIENT *clnt;
{
	static fhstatus clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, MOUNTPROC_MNT, (xdrproc_t) xdr_dirpath,
		      (caddr_t) argp, (xdrproc_t) xdr_fhstatus, (caddr_t) & clnt_res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

mountlist *mountproc_dump_2(argp, clnt)
void *argp;
CLIENT *clnt;
{
	static mountlist clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, MOUNTPROC_DUMP, (xdrproc_t) xdr_void, argp,
		      (xdrproc_t) xdr_mountlist, (caddr_t) & clnt_res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

void *mountproc_umnt_2(argp, clnt)
dirpath *argp;
CLIENT *clnt;
{
	static char clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, MOUNTPROC_UMNT, (xdrproc_t) xdr_dirpath,
		      (caddr_t) argp, (xdrproc_t) xdr_void, (caddr_t) & clnt_res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return ((void *)&clnt_res);
}

void *mountproc_umntall_2(argp, clnt)
void *argp;
CLIENT *clnt;
{
	static char clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, MOUNTPROC_UMNTALL, (xdrproc_t) xdr_void,
		      (caddr_t) argp, (xdrproc_t) xdr_void, (caddr_t) & clnt_res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return ((void *)&clnt_res);
}

exports *mountproc_export_2(argp, clnt)
void *argp;
CLIENT *clnt;
{
	static exports clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, MOUNTPROC_EXPORT, (xdrproc_t) xdr_void,
		      argp, (xdrproc_t) xdr_exports, (caddr_t) & clnt_res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

exports *mountproc_exportall_2(argp, clnt)
void *argp;
CLIENT *clnt;
{
	static exports clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, MOUNTPROC_EXPORTALL, (xdrproc_t) xdr_void, argp,
		      (xdrproc_t) xdr_exports, (caddr_t) & clnt_res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

ppathcnf *mountproc_pathconf_2(argp, clnt)
dirpath *argp;
CLIENT *clnt;
{
	static ppathcnf clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, MOUNTPROC_PATHCONF, (xdrproc_t) xdr_dirpath,
		      (caddr_t) argp, (xdrproc_t) xdr_ppathcnf, (caddr_t) & clnt_res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

#endif
