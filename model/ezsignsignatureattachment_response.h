/*
 * ezsignsignatureattachment_response.h
 *
 * An Ezsignsignatureattachment Object
 */

#ifndef _ezsignsignatureattachment_response_H_
#define _ezsignsignatureattachment_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignatureattachment_response_t ezsignsignatureattachment_response_t;




typedef struct ezsignsignatureattachment_response_t {
    int pki_ezsignsignatureattachment_id; //numeric
    int fki_ezsignsignature_id; //numeric
    char *bin_ezsignsignatureattachment_md5; // string
    char *s_ezsignsignatureattachment_name; // string
    char *s_download_url; // string

} ezsignsignatureattachment_response_t;

ezsignsignatureattachment_response_t *ezsignsignatureattachment_response_create(
    int pki_ezsignsignatureattachment_id,
    int fki_ezsignsignature_id,
    char *bin_ezsignsignatureattachment_md5,
    char *s_ezsignsignatureattachment_name,
    char *s_download_url
);

void ezsignsignatureattachment_response_free(ezsignsignatureattachment_response_t *ezsignsignatureattachment_response);

ezsignsignatureattachment_response_t *ezsignsignatureattachment_response_parseFromJSON(cJSON *ezsignsignatureattachment_responseJSON);

cJSON *ezsignsignatureattachment_response_convertToJSON(ezsignsignatureattachment_response_t *ezsignsignatureattachment_response);

#endif /* _ezsignsignatureattachment_response_H_ */

