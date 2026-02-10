/*
 * ezsignfoldersignerassociation_create_embedded_url_v1_request.h
 *
 * Request for POST /1/object/ezsignfoldersignerassociation/createEmbeddedUrl
 */

#ifndef _ezsignfoldersignerassociation_create_embedded_url_v1_request_H_
#define _ezsignfoldersignerassociation_create_embedded_url_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_create_embedded_url_v1_request_t ezsignfoldersignerassociation_create_embedded_url_v1_request_t;




typedef struct ezsignfoldersignerassociation_create_embedded_url_v1_request_t {
    char *s_return_url; // string
    char *s_iframedomain; // string
    int b_is_iframe; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfoldersignerassociation_create_embedded_url_v1_request_t;

__attribute__((deprecated)) ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request_create(
    char *s_return_url,
    char *s_iframedomain,
    int b_is_iframe
);

void ezsignfoldersignerassociation_create_embedded_url_v1_request_free(ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request);

ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request_parseFromJSON(cJSON *ezsignfoldersignerassociation_create_embedded_url_v1_requestJSON);

cJSON *ezsignfoldersignerassociation_create_embedded_url_v1_request_convertToJSON(ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request);

#endif /* _ezsignfoldersignerassociation_create_embedded_url_v1_request_H_ */

