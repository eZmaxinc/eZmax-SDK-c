/*
 * common_auditdetail.h
 *
 * Gives informations about the user that created the object or the last user to have modified it.  If the object was never modified after creation, both Created and Modified informations will be the same. 
 */

#ifndef _common_auditdetail_H_
#define _common_auditdetail_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_auditdetail_t common_auditdetail_t;




typedef struct common_auditdetail_t {
    int fki_user_id; //numeric
    int fki_apikey_id; //numeric
    char *s_user_loginname; // string
    char *s_user_lastname; // string
    char *s_user_firstname; // string
    char *s_apikey_description_x; // string
    char *dt_auditdetail_date; // string

} common_auditdetail_t;

common_auditdetail_t *common_auditdetail_create(
    int fki_user_id,
    int fki_apikey_id,
    char *s_user_loginname,
    char *s_user_lastname,
    char *s_user_firstname,
    char *s_apikey_description_x,
    char *dt_auditdetail_date
);

void common_auditdetail_free(common_auditdetail_t *common_auditdetail);

common_auditdetail_t *common_auditdetail_parseFromJSON(cJSON *common_auditdetailJSON);

cJSON *common_auditdetail_convertToJSON(common_auditdetail_t *common_auditdetail);

#endif /* _common_auditdetail_H_ */

