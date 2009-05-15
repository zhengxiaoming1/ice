// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

//
// Generated by makeprops.py from file ../config/PropertyNames.xml, Fri May 15 13:11:40 2009

// IMPORTANT: Do not edit this file -- any edits made here will be lost!

#ifndef ICE_INTERNAL_PropertyNames_H
#define ICE_INTERNAL_PropertyNames_H

#include <Ice/Config.h>

namespace IceInternal
{

struct Property
{
    const char* pattern;
    bool deprecated;
    const char* deprecatedBy;

    Property(const char* n, bool d, const char* b) :
	pattern(n),
	deprecated(d),
	deprecatedBy(b)
    {
    }

    Property() :
        pattern(0),
        deprecated(false),
        deprecatedBy(0)
    {
    }

};

struct PropertyArray
{
    const Property* properties;
    const int length;

    PropertyArray(const Property* p, int len) :
        properties(p),
        length(len)
    {
    }
};

class PropertyNames
{
public:

    static const PropertyArray IceProps;
    static const PropertyArray IceBoxProps;
    static const PropertyArray IceBoxAdminProps;
    static const PropertyArray IceGridAdminProps;
    static const PropertyArray IceGridProps;
    static const PropertyArray IcePatch2Props;
    static const PropertyArray IceSSLProps;
    static const PropertyArray IceStormAdminProps;
    static const PropertyArray Glacier2Props;
    static const PropertyArray FreezeProps;

    static const PropertyArray validProps[];
    static const char * clPropNames[];
};

}

#endif
