#include <string.h>
#include <stdlib.h>

#include "strings.h"
#include "language.h"

JsValue* stringCreateFromCString(char* string) {
    JsString* jsString = calloc(sizeof(JsString), 1);
    double l = strlen(string);
    *jsString = (JsString) {
        .cString = string,
        .length = l,
    };
    JsValue *val = jsValueCreatePointer(STRING_TYPE, jsString);
    return val;
}

JsString* stringGet(JsValue* value) {
    JsString* jsString = jsValuePointer(value);
    return jsString;
}
