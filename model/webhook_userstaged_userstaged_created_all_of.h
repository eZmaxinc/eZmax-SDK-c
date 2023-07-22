/*
 * webhook_userstaged_userstaged_created_all_of.h
 *
 * 
 */

#ifndef _webhook_userstaged_userstaged_created_all_of_H_
#define _webhook_userstaged_userstaged_created_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_userstaged_userstaged_created_all_of_t webhook_userstaged_userstaged_created_all_of_t;

#include "userstaged_response_compound.h"



typedef struct webhook_userstaged_userstaged_created_all_of_t {
    struct userstaged_response_compound_t *obj_userstaged; //model

} webhook_userstaged_userstaged_created_all_of_t;

webhook_userstaged_userstaged_created_all_of_t *webhook_userstaged_userstaged_created_all_of_create(
    userstaged_response_compound_t *obj_userstaged
);

void webhook_userstaged_userstaged_created_all_of_free(webhook_userstaged_userstaged_created_all_of_t *webhook_userstaged_userstaged_created_all_of);

webhook_userstaged_userstaged_created_all_of_t *webhook_userstaged_userstaged_created_all_of_parseFromJSON(cJSON *webhook_userstaged_userstaged_created_all_ofJSON);

cJSON *webhook_userstaged_userstaged_created_all_of_convertToJSON(webhook_userstaged_userstaged_created_all_of_t *webhook_userstaged_userstaged_created_all_of);

#endif /* _webhook_userstaged_userstaged_created_all_of_H_ */

