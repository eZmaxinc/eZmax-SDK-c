/*
 * common_reportcellstyle.h
 *
 * Styles applied to a Reportcell 
 */

#ifndef _common_reportcellstyle_H_
#define _common_reportcellstyle_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_reportcellstyle_t common_reportcellstyle_t;

#include "enum_fontunderline.h"
#include "enum_fontweight.h"
#include "enum_horizontalalignment.h"
#include "enum_verticalalignment.h"



typedef struct common_reportcellstyle_t {
    int b_reportcellstyle_bordertop; //boolean
    int b_reportcellstyle_borderbottom; //boolean
    int b_reportcellstyle_borderleft; //boolean
    int b_reportcellstyle_borderright; //boolean
    ezmax_api_definition__full_enum_horizontalalignment__e e_reportcell_horizontalalignment; //referenced enum
    ezmax_api_definition__full_enum_verticalalignment__e e_reportcell_verticalalignment; //referenced enum
    ezmax_api_definition__full_enum_fontweight__e e_reportcell_fontweight; //referenced enum
    ezmax_api_definition__full_enum_fontunderline__e e_reportcell_fontunderline; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} common_reportcellstyle_t;

__attribute__((deprecated)) common_reportcellstyle_t *common_reportcellstyle_create(
    int b_reportcellstyle_bordertop,
    int b_reportcellstyle_borderbottom,
    int b_reportcellstyle_borderleft,
    int b_reportcellstyle_borderright,
    ezmax_api_definition__full_enum_horizontalalignment__e e_reportcell_horizontalalignment,
    ezmax_api_definition__full_enum_verticalalignment__e e_reportcell_verticalalignment,
    ezmax_api_definition__full_enum_fontweight__e e_reportcell_fontweight,
    ezmax_api_definition__full_enum_fontunderline__e e_reportcell_fontunderline
);

void common_reportcellstyle_free(common_reportcellstyle_t *common_reportcellstyle);

common_reportcellstyle_t *common_reportcellstyle_parseFromJSON(cJSON *common_reportcellstyleJSON);

cJSON *common_reportcellstyle_convertToJSON(common_reportcellstyle_t *common_reportcellstyle);

#endif /* _common_reportcellstyle_H_ */

