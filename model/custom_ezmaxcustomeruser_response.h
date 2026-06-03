/*
 * custom_ezmaxcustomeruser_response.h
 *
 * A Ezmaxcustomeruser Object
 */

#ifndef _custom_ezmaxcustomeruser_response_H_
#define _custom_ezmaxcustomeruser_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezmaxcustomeruser_response_t custom_ezmaxcustomeruser_response_t;

#include "custom_ezmaxcustomer_response.h"
#include "email_response_compound.h"
#include "phone_response_compound.h"



typedef struct custom_ezmaxcustomeruser_response_t {
    struct custom_ezmaxcustomer_response_t *obj_ezmaxcustomer; //model
    int *fki_contacttitle_id; //numeric
    int *fki_language_id; //numeric
    struct email_response_compound_t *obj_email; //model
    struct phone_response_compound_t *obj_phone; //model
    char *s_ezmaxcustomeruser_firstname; // string
    char *s_ezmaxcustomeruser_lastname; // string

    int _library_owned; // Is the library responsible for freeing this object?
} custom_ezmaxcustomeruser_response_t;

__attribute__((deprecated)) custom_ezmaxcustomeruser_response_t *custom_ezmaxcustomeruser_response_create(
    custom_ezmaxcustomer_response_t *obj_ezmaxcustomer,
    int *fki_contacttitle_id,
    int *fki_language_id,
    email_response_compound_t *obj_email,
    phone_response_compound_t *obj_phone,
    char *s_ezmaxcustomeruser_firstname,
    char *s_ezmaxcustomeruser_lastname
);

void custom_ezmaxcustomeruser_response_free(custom_ezmaxcustomeruser_response_t *custom_ezmaxcustomeruser_response);

custom_ezmaxcustomeruser_response_t *custom_ezmaxcustomeruser_response_parseFromJSON(cJSON *custom_ezmaxcustomeruser_responseJSON);

cJSON *custom_ezmaxcustomeruser_response_convertToJSON(custom_ezmaxcustomeruser_response_t *custom_ezmaxcustomeruser_response);

#endif /* _custom_ezmaxcustomeruser_response_H_ */

