/*
 * franchisereferalincome_request_compound_all_of.h
 *
 * 
 */

#ifndef _franchisereferalincome_request_compound_all_of_H_
#define _franchisereferalincome_request_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct franchisereferalincome_request_compound_all_of_t franchisereferalincome_request_compound_all_of_t;

#include "address_request.h"
#include "contact_request_compound.h"



typedef struct franchisereferalincome_request_compound_all_of_t {
    struct address_request_t *obj_address; //model
    list_t *a_obj_contact; //nonprimitive container

} franchisereferalincome_request_compound_all_of_t;

franchisereferalincome_request_compound_all_of_t *franchisereferalincome_request_compound_all_of_create(
    address_request_t *obj_address,
    list_t *a_obj_contact
);

void franchisereferalincome_request_compound_all_of_free(franchisereferalincome_request_compound_all_of_t *franchisereferalincome_request_compound_all_of);

franchisereferalincome_request_compound_all_of_t *franchisereferalincome_request_compound_all_of_parseFromJSON(cJSON *franchisereferalincome_request_compound_all_ofJSON);

cJSON *franchisereferalincome_request_compound_all_of_convertToJSON(franchisereferalincome_request_compound_all_of_t *franchisereferalincome_request_compound_all_of);

#endif /* _franchisereferalincome_request_compound_all_of_H_ */

