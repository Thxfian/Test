#pragma once

#define DESIGNPATTERNSETGET(type, Fucname, name)\
void Set##Fucname(const type& v) { name = v; }\
type Get##Fucname() { return name; }
