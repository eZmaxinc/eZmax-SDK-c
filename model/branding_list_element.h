/*
 * branding_list_element.h
 *
 * A Branding List Element
 */

#ifndef _branding_list_element_H_
#define _branding_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_list_element_t branding_list_element_t;




typedef struct branding_list_element_t {
    int pki_branding_id; //numeric
    char *s_branding_description_x; // string
    int i_branding_colortext; //numeric
    int i_branding_colortextlinkbox; //numeric
    int i_branding_colortextbutton; //numeric
    int i_branding_colorbackground; //numeric
    int i_branding_colorbackgroundbutton; //numeric
    int i_branding_colorbackgroundsmallbox; //numeric
    int b_branding_isactive; //boolean

} branding_list_element_t;

branding_list_element_t *branding_list_element_create(
    int pki_branding_id,
    char *s_branding_description_x,
    int i_branding_colortext,
    int i_branding_colortextlinkbox,
    int i_branding_colortextbutton,
    int i_branding_colorbackground,
    int i_branding_colorbackgroundbutton,
    int i_branding_colorbackgroundsmallbox,
    int b_branding_isactive
);

void branding_list_element_free(branding_list_element_t *branding_list_element);

branding_list_element_t *branding_list_element_parseFromJSON(cJSON *branding_list_elementJSON);

cJSON *branding_list_element_convertToJSON(branding_list_element_t *branding_list_element);

#endif /* _branding_list_element_H_ */

