/*
 * tokens.h
 * 
 * This file is a part of NSIS.
 * 
 * Copyright (C) 1999-2017 Nullsoft and Contributors
 * 
 * Licensed under the zlib/libpng license (the "License");
 * you may not use this file except in compliance with the License.
 * 
 * Licence details can be found in the file COPYING.
 * 
 * This software is provided 'as-is', without any express or implied
 * warranty.
 *
 * Added commands for Unicode support by Jim Park -- 08/21/2007
 */

#ifndef _TOKENS_H_
#define _TOKENS_H_

// the order of these two lists no longer needs to match. -J
enum 
{
  // header setting tokens
  TOK_NAME,
  TOK_CAPTION,
  TOK_UNINSTCAPTION,
  TOK_ICON,
  TOK_UNINSTICON,
  TOK_CHECKBITMAP,
  TOK_WINDOWICON,
  TOK_DIRTEXT,
  TOK_COMPTEXT,
  TOK_LICENSEBKCOLOR,
  TOK_LICENSEDATA,
  TOK_LICENSEFORCESELECTION,
  TOK_LICENSELANGSTRING,
  TOK_LICENSETEXT,
  TOK_UNINSTTEXT,
  TOK_SILENTINST,
  TOK_SILENTUNINST,
  TOK_INSTTYPE,
  TOK_OUTFILE,
  TOK_INSTDIR,
  TOK_INSTALLDIRREGKEY,
  TOK_UNINSTALLEXENAME,
  TOK_CRCCHECK,
  TOK_AUTOCLOSE,
  TOK_SHOWDETAILS,
  TOK_SHOWDETAILSUNINST,
  TOK_DIRSHOW,
  TOK_ROOTDIRINST,
  TOK_BGFONT,
  TOK_BGGRADIENT,
  TOK_INSTCOLORS,
  TOK_SUBCAPTION,
  TOK_UNINSTSUBCAPTION,
  TOK_BRANDINGTEXT,
  TOK_FILEERRORTEXT,
  TOK_INSTPROGRESSFLAGS,
  TOK_PEDLLCHARACTERISTICS,
  TOK_PESUBSYSVER,
  TOK_XPSTYLE,
  TOK_REQEXECLEVEL,
  TOK_MANIFEST_DPIAWARE,
  TOK_MANIFEST_DPIAWARENESS,
  TOK_MANIFEST_SUPPORTEDOS,
  TOK_CHANGEUI,
  TOK_ADDBRANDINGIMAGE,
  TOK_SETFONT,
  TOK_LOADNLF,
  TOK_RESERVEFILE,
  TOK_ALLOWSKIPFILES,
  TOK_DEFVAR,
  TOK_VI_ADDKEY,
  TOK_VI_SETPRODUCTVERSION,
  TOK_VI_SETFILEVERSION,
#ifdef _UNICODE
  TOK_TARGET,
  TOK_TARGETCPU,
  TOK_TARGETUNICODE,
#endif

  TOK_MISCBUTTONTEXT,
  TOK_DETAILSBUTTONTEXT,
  TOK_UNINSTBUTTONTEXT,
  TOK_INSTBUTTONTEXT,
  TOK_SPACETEXTS,
  TOK_COMPLETEDTEXT,

  TOK_LANGSTRING,
  TOK_LANGSTRINGUP,

  // compression stuff
  TOK_SETCOMPRESS,
  TOK_DBOPTIMIZE,
  TOK_SETCOMPRESSOR,
  TOK_SETCOMPRESSORDICTSIZE,
  TOK_SETCOMPRESSIONLEVEL,
  TOK_FILEBUFSIZE,
  
  // system "preprocessor"ish tokens
  TOK_P_IF,
  TOK_P_IFDEF,
  TOK_P_IFNDEF,
  TOK_P_ELSE,  
  TOK_P_ENDIF,
  TOK_P_DEFINE,
  TOK_P_UNDEF,
  TOK_P_PACKEXEHEADER,
  TOK_P_FINALIZE,
  TOK_P_SYSTEMEXEC,
  TOK_P_EXECUTE,
  TOK_P_MAKENSIS,
  TOK_P_ADDINCLUDEDIR,
  TOK_P_INCLUDE,
  TOK_P_CD,
  TOK_P_ECHO,
  TOK_P_WARNING,
  TOK_P_ERROR,

  TOK_P_VERBOSE,
  TOK_P_PRAGMA,

  TOK_P_MACRO,
  TOK_P_MACROEND,
  TOK_P_MACROUNDEF,
  TOK_P_INSERTMACRO,
  TOK_P_IFMACRODEF,
  TOK_P_IFMACRONDEF,

  TOK_P_TEMPFILE,
  TOK_P_DELFILE,
  TOK_P_APPENDFILE,
  TOK_P_GETDLLVERSION,
  TOK_P_GETTLBVERSION,

  TOK_P_SEARCHPARSESTRING,
  TOK_P_SEARCHREPLACESTRING,

  // section/function stuff
  TOK_SECTION,
  TOK_SECTIONEND,
  TOK_SECTIONIN,
  TOK_SECTIONGROUP,
  TOK_SECTIONGROUPEND,
  TOK_SUBSECTION,
  TOK_SUBSECTIONEND,
  TOK_FUNCTION,
  TOK_FUNCTIONEND,
  TOK_ADDSIZE,

  // page ordering
  TOK_PAGE,
  TOK_UNINSTPAGE,

  // PageEx stuff
  TOK_PAGEEX,
  TOK_PAGEEXEND,
  TOK_DIRVAR,
  TOK_DIRVERIFY,
  TOK_PAGECALLBACKS,

  TOK_GETINSTDIRERROR,

  // flag setters
  TOK_SETDATESAVE,
  TOK_SETOVERWRITE,
  TOK_SETPLUGINUNLOAD,

  // instructions
  TOK_NOP,
  TOK_GOTO,
  TOK_RET,
  TOK_CALL,
  TOK_SETOUTPATH,
  TOK_CREATEDIR,
  TOK_EXEC,
  TOK_EXECWAIT,
  TOK_EXECSHELL,
  TOK_EXECSHELLWAIT,
  TOK_CALLINSTDLL,
  TOK_REGDLL,
  TOK_UNREGDLL,
  TOK_RENAME,
  TOK_MESSAGEBOX,
  TOK_DELETEREGVALUE,
  TOK_DELETEREGKEY,
  TOK_WRITEREGSTR,
  TOK_WRITEREGEXPANDSTR,
  TOK_WRITEREGBIN,
  TOK_WRITEREGMULTISZ,
  TOK_WRITEREGDWORD,
  TOK_WRITEREGNONE,
  TOK_DELETEINISEC,
  TOK_DELETEINISTR,
  TOK_FLUSHINI,
  TOK_WRITEINISTR,
  TOK_CREATESHORTCUT,
  TOK_FINDWINDOW,
  TOK_DELETE,
  TOK_RMDIR,
  TOK_FILE,
  TOK_COPYFILES,
  TOK_SETFILEATTRIBUTES,
  TOK_SLEEP,
  TOK_BRINGTOFRONT,
  TOK_HIDEWINDOW,
  TOK_IFFILEEXISTS,
  TOK_ABORT,
  TOK_QUIT,
  TOK_SETDETAILSVIEW,
  TOK_SETDETAILSPRINT,
  TOK_SETAUTOCLOSE,
  TOK_IFERRORS,
  TOK_CLEARERRORS,
  TOK_SETERRORS,
  TOK_IFABORT,
  TOK_STRCPY,
  TOK_UNSAFESTRCPY,
  TOK_STRCMP,
  TOK_STRCMPS,
  TOK_GETTEMPFILENAME,
  TOK_GETFUNCTIONADDR,
  TOK_GETLABELADDR,
  TOK_GETCURRENTADDR,
  TOK_READINISTR,
  TOK_READREGSTR,
  TOK_READREGDWORD,
  TOK_READENVSTR,
  TOK_EXPANDENVSTRS,
  TOK_DETAILPRINT,
  TOK_SEARCHPATH,
  TOK_GETDLLVERSION,
  TOK_GETDLLVERSIONLOCAL,
  TOK_GETFILETIME,
  TOK_GETFILETIMELOCAL,
  TOK_STRLEN,
  TOK_INTOP,
  TOK_INTCMP,
  TOK_INTCMPU,
  TOK_INTFMT,
  TOK_ENUMREGKEY,
  TOK_ENUMREGVAL,
  TOK_PUSH,
  TOK_POP,
  TOK_EXCH,
  TOK_SENDMESSAGE,
  TOK_ISWINDOW,
  TOK_GETDLGITEM,
  TOK_SETCTLCOLORS,
  TOK_FINDFIRST,
  TOK_FINDNEXT,
  TOK_FINDCLOSE,
  TOK_FILEOPEN,
  TOK_FILECLOSE,
  TOK_FILEREAD,
  TOK_FILEWRITE,
  TOK_FILEREADBYTE,
  TOK_FILEWRITEBYTE,
#ifdef _UNICODE
  TOK_FILEREADUTF16LE,
  TOK_FILEWRITEUTF16LE,
  TOK_FILEREADWORD,
  TOK_FILEWRITEWORD,
#endif
  TOK_FILESEEK,
  TOK_GETFULLPATHNAME,
  TOK_REBOOT,
  TOK_IFREBOOTFLAG,
  TOK_SETREBOOTFLAG,
  TOK_WRITEUNINSTALLER,
  TOK_LOGSET,
  TOK_LOGTEXT,
  TOK_SETBRANDINGIMAGE,
  TOK_SECTIONSETTEXT,
  TOK_SECTIONGETTEXT,
  TOK_SECTIONSETFLAGS,
  TOK_SECTIONGETFLAGS,
  TOK_SECTIONSETINSTTYPES,
  TOK_SECTIONGETINSTTYPES,
  TOK_SECTIONSETSIZE,
  TOK_SECTIONGETSIZE,
  TOK_INSTTYPESETTEXT,
  TOK_INSTTYPEGETTEXT,
  TOK_GETCURINSTTYPE,
  TOK_SETCURINSTTYPE,
  TOK_SETREGVIEW,
  TOK_SETSHELLVARCONTEXT,
  TOK_PLUGINDIR,
  TOK_INITPLUGINSDIR,
  TOK_CREATEFONT,
  TOK_SHOWWINDOW,
  TOK_ENABLEWINDOW,
  TOK_SETSILENT,
  TOK_IFSILENT,
  TOK_SETERRORLEVEL,
  TOK_GETERRORLEVEL,
  TOK_LOCKWINDOW,

  TOK__LAST,
  TOK__PLUGINCOMMAND
};

#endif//_TOKENS_H_
