/*
 * ezmaxpartner_response.h
 *
 * An Ezmaxpartner Object
 */

#ifndef _ezmaxpartner_response_H_
#define _ezmaxpartner_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxpartner_response_t ezmaxpartner_response_t;

#include "field_e_ezmaxpartner_customdevelopment.h"
#include "multilingual_ezmaxpartner_address.h"
#include "multilingual_ezmaxpartner_description.h"
#include "multilingual_ezmaxpartner_emailaddress.h"
#include "multilingual_ezmaxpartner_name.h"
#include "multilingual_ezmaxpartner_phone_e164.h"
#include "multilingual_ezmaxpartner_shortdescription.h"
#include "multilingual_ezmaxpartner_url.h"



typedef struct ezmaxpartner_response_t {
    ezmax_api_definition__full_field_e_ezmaxpartner_customdevelopment__e e_ezmaxpartner_customdevelopment; //referenced enum
    struct multilingual_ezmaxpartner_address_t *obj_ezmaxpartner_address; //model
    struct multilingual_ezmaxpartner_description_t *obj_ezmaxpartner_description; //model
    struct multilingual_ezmaxpartner_emailaddress_t *obj_ezmaxpartner_emailaddress; //model
    struct multilingual_ezmaxpartner_name_t *obj_ezmaxpartner_name; //model
    struct multilingual_ezmaxpartner_phone_e164_t *obj_ezmaxpartner_phone_e164; //model
    struct multilingual_ezmaxpartner_shortdescription_t *obj_ezmaxpartner_shortdescription; //model
    struct multilingual_ezmaxpartner_url_t *obj_ezmaxpartner_url; //model
    int *b_ezmaxpartner_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxpartner_response_t;

__attribute__((deprecated)) ezmaxpartner_response_t *ezmaxpartner_response_create(
    ezmax_api_definition__full_field_e_ezmaxpartner_customdevelopment__e e_ezmaxpartner_customdevelopment,
    multilingual_ezmaxpartner_address_t *obj_ezmaxpartner_address,
    multilingual_ezmaxpartner_description_t *obj_ezmaxpartner_description,
    multilingual_ezmaxpartner_emailaddress_t *obj_ezmaxpartner_emailaddress,
    multilingual_ezmaxpartner_name_t *obj_ezmaxpartner_name,
    multilingual_ezmaxpartner_phone_e164_t *obj_ezmaxpartner_phone_e164,
    multilingual_ezmaxpartner_shortdescription_t *obj_ezmaxpartner_shortdescription,
    multilingual_ezmaxpartner_url_t *obj_ezmaxpartner_url,
    int *b_ezmaxpartner_isactive
);

void ezmaxpartner_response_free(ezmaxpartner_response_t *ezmaxpartner_response);

ezmaxpartner_response_t *ezmaxpartner_response_parseFromJSON(cJSON *ezmaxpartner_responseJSON);

cJSON *ezmaxpartner_response_convertToJSON(ezmaxpartner_response_t *ezmaxpartner_response);

#endif /* _ezmaxpartner_response_H_ */

