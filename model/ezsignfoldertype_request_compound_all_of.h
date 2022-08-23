/*
 * ezsignfoldertype_request_compound_all_of.h
 *
 * 
 */

#ifndef _ezsignfoldertype_request_compound_all_of_H_
#define _ezsignfoldertype_request_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_request_compound_all_of_t ezsignfoldertype_request_compound_all_of_t;




typedef struct ezsignfoldertype_request_compound_all_of_t {
    list_t *a_fki_user_id_signed; //primitive container
    list_t *a_fki_user_id_summary; //primitive container

} ezsignfoldertype_request_compound_all_of_t;

ezsignfoldertype_request_compound_all_of_t *ezsignfoldertype_request_compound_all_of_create(
    list_t *a_fki_user_id_signed,
    list_t *a_fki_user_id_summary
);

void ezsignfoldertype_request_compound_all_of_free(ezsignfoldertype_request_compound_all_of_t *ezsignfoldertype_request_compound_all_of);

ezsignfoldertype_request_compound_all_of_t *ezsignfoldertype_request_compound_all_of_parseFromJSON(cJSON *ezsignfoldertype_request_compound_all_ofJSON);

cJSON *ezsignfoldertype_request_compound_all_of_convertToJSON(ezsignfoldertype_request_compound_all_of_t *ezsignfoldertype_request_compound_all_of);

#endif /* _ezsignfoldertype_request_compound_all_of_H_ */

