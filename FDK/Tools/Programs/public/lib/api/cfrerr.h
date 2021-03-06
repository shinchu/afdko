/* Copyright 2014 Adobe Systems Incorporated (http://www.adobe.com/). All Rights Reserved.
This software is licensed as OpenSource, under the Apache License, Version 2.0. This license is available at: http://opensource.org/licenses/Apache-2.0. */

/* cffread library error name to error string mapping. See ctlshare.h for
   description of CTL_DCL_ERR macro. */

CTL_DCL_ERR(cfrSuccess,             "no error")
CTL_DCL_ERR(cfrErrCstrQuit,         "client quit glyph parse")
CTL_DCL_ERR(cfrErrCstrFail,         "client failed glyph parse")
CTL_DCL_ERR(cfrErrCstrParse,        "charstring parse error")
CTL_DCL_ERR(cfrErrNoMemory,         "out of memory")
CTL_DCL_ERR(cfrErrSrcStream,        "source stream error")
CTL_DCL_ERR(cfrErrStackUnderflow,   "DICT stack underflow")
CTL_DCL_ERR(cfrErrStackOverflow,    "DICT stack overflow")
CTL_DCL_ERR(cfrErrINDEXBounds,      "INDEX access out of bounds")
CTL_DCL_ERR(cfrErrINDEXOffset,      "bad INDEX offset array")
CTL_DCL_ERR(cfrErrINDEXHeader,      "bad INDEX header")
CTL_DCL_ERR(cfrErrFontMatrix,       "invalid FontMatrix")
CTL_DCL_ERR(cfrErrBCDArg,           "invalid BCD DICT argument")
CTL_DCL_ERR(cfrErrSID,              "SID access out of bounds")
CTL_DCL_ERR(cfrErrEmptyDICT,        "empty DICT")
CTL_DCL_ERR(cfrErrDICTArray,        "invalid DICT array size")
CTL_DCL_ERR(cfrErrCstrType,         "invalid charstring type")
CTL_DCL_ERR(cfrErrCIDType,          "invalid CIDFontType")
CTL_DCL_ERR(cfrErrChameleon,        "Chameleon font (unsupported)")
CTL_DCL_ERR(cfrErrDICTOp,           "invalid DICT operator")
CTL_DCL_ERR(cfrErrNoPrivate,        "Private DICT missing")
CTL_DCL_ERR(cfrErrNoFDArray,        "FDArray missing")
CTL_DCL_ERR(cfrErrBadFDArray,       "invalid FDArray")
CTL_DCL_ERR(cfrErrMultipleFont,     "multiple-font FontSet (unsupported)")
CTL_DCL_ERR(cfrErrCharsetFmt,       "invalid charset format")
CTL_DCL_ERR(cfrErrEncodingFmt,      "invalid Encoding format")
CTL_DCL_ERR(cfrErrEncodingSupp,     "invalid supplementary encoding")
CTL_DCL_ERR(cfrErrNoFDSelect,       "FDSelect missing")
CTL_DCL_ERR(cfrErrFDSelectFmt,      "invalid FDSelect format")
CTL_DCL_ERR(cfrErrBadFont,          "not CFF font type")
CTL_DCL_ERR(cfrErrNoCharStrings,    "CharStrings INDEX missing")
CTL_DCL_ERR(cfrErrNoGlyph,          "requested glyph not in font")
CTL_DCL_ERR(cfrErrSfntread,         "sfntread library error")
CTL_DCL_ERR(cfrErrNoCFF,            "CFF table missing")
CTL_DCL_ERR(cfrErrFSType,           "invalid FSType value")
CTL_DCL_ERR(cfrErrOrigFontType,     "invalid OrigFontType value")
CTL_DCL_ERR(cfrErrGeometry,         "inconsitent variable font geometry")
