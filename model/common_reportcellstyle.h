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

// Enum  for common_reportcellstyle

typedef enum  { ezmax_api_definition__full_common_reportcellstyle__NULL = 0, ezmax_api_definition__full_common_reportcellstyle__Center, ezmax_api_definition__full_common_reportcellstyle__Left, ezmax_api_definition__full_common_reportcellstyle__Right } ezmax_api_definition__full_common_reportcellstyle__e;

char* common_reportcellstyle_e_reportcell_horizontalalignment_ToString(ezmax_api_definition__full_common_reportcellstyle__e e_reportcell_horizontalalignment);

ezmax_api_definition__full_common_reportcellstyle__e common_reportcellstyle_e_reportcell_horizontalalignment_FromString(char* e_reportcell_horizontalalignment);

// Enum  for common_reportcellstyle

typedef enum  { ezmax_api_definition__full_common_reportcellstyle__NULL = 0, ezmax_api_definition__full_common_reportcellstyle__Bottom, ezmax_api_definition__full_common_reportcellstyle__Middle, ezmax_api_definition__full_common_reportcellstyle__Top } ezmax_api_definition__full_common_reportcellstyle__e;

char* common_reportcellstyle_e_reportcell_verticalalignment_ToString(ezmax_api_definition__full_common_reportcellstyle__e e_reportcell_verticalalignment);

ezmax_api_definition__full_common_reportcellstyle__e common_reportcellstyle_e_reportcell_verticalalignment_FromString(char* e_reportcell_verticalalignment);

// Enum  for common_reportcellstyle

typedef enum  { ezmax_api_definition__full_common_reportcellstyle__NULL = 0, ezmax_api_definition__full_common_reportcellstyle__Normal, ezmax_api_definition__full_common_reportcellstyle__Bold } ezmax_api_definition__full_common_reportcellstyle__e;

char* common_reportcellstyle_e_reportcell_fontweight_ToString(ezmax_api_definition__full_common_reportcellstyle__e e_reportcell_fontweight);

ezmax_api_definition__full_common_reportcellstyle__e common_reportcellstyle_e_reportcell_fontweight_FromString(char* e_reportcell_fontweight);

// Enum  for common_reportcellstyle

typedef enum  { ezmax_api_definition__full_common_reportcellstyle__NULL = 0, ezmax_api_definition__full_common_reportcellstyle__None, ezmax_api_definition__full_common_reportcellstyle__Single, ezmax_api_definition__full_common_reportcellstyle___Double } ezmax_api_definition__full_common_reportcellstyle__e;

char* common_reportcellstyle_e_reportcell_fontunderline_ToString(ezmax_api_definition__full_common_reportcellstyle__e e_reportcell_fontunderline);

ezmax_api_definition__full_common_reportcellstyle__e common_reportcellstyle_e_reportcell_fontunderline_FromString(char* e_reportcell_fontunderline);



typedef struct common_reportcellstyle_t {
    int b_reportcellstyle_bordertop; //boolean
    int b_reportcellstyle_borderbottom; //boolean
    int b_reportcellstyle_borderleft; //boolean
    int b_reportcellstyle_borderright; //boolean
    enum_horizontalalignment_t *e_reportcell_horizontalalignment; // custom
    enum_verticalalignment_t *e_reportcell_verticalalignment; // custom
    enum_fontweight_t *e_reportcell_fontweight; // custom
    enum_fontunderline_t *e_reportcell_fontunderline; // custom

} common_reportcellstyle_t;

common_reportcellstyle_t *common_reportcellstyle_create(
    int b_reportcellstyle_bordertop,
    int b_reportcellstyle_borderbottom,
    int b_reportcellstyle_borderleft,
    int b_reportcellstyle_borderright,
    enum_horizontalalignment_t *e_reportcell_horizontalalignment,
    enum_verticalalignment_t *e_reportcell_verticalalignment,
    enum_fontweight_t *e_reportcell_fontweight,
    enum_fontunderline_t *e_reportcell_fontunderline
);

void common_reportcellstyle_free(common_reportcellstyle_t *common_reportcellstyle);

common_reportcellstyle_t *common_reportcellstyle_parseFromJSON(cJSON *common_reportcellstyleJSON);

cJSON *common_reportcellstyle_convertToJSON(common_reportcellstyle_t *common_reportcellstyle);

#endif /* _common_reportcellstyle_H_ */

