/*-----------------------------------------------------------------------------------------------
The MIT License (MIT)

Copyright (c) 2014-2015 Kim Kulling

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
-----------------------------------------------------------------------------------------------*/
#pragma once

#include <openddlparser/OpenDDLCommon.h>

BEGIN_ODDLPARSER_NS

///
/// @ingroup    OpenDDLParser
///	@brief      This class represents the OpenDDLExporter.
///
class DLL_ODDLPARSER_EXPORT OpenDDLExport {
public:
    OpenDDLExport();
    ~OpenDDLExport();
    bool exportContext( Context *ctx, const std::string &filename );
    bool handleNode( DDLNode *node );
    bool write( const std::string &statement );

protected:
    bool writeNode( DDLNode *node, std::string &statement );
    bool writeProperties( DDLNode *node, std::string &statement );
    bool writeValue( Value *val, std::string &statement );

private:
    FILE *m_file;
};

END_ODDLPARSER_NS