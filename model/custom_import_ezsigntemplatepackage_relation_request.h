/*
 * custom_import_ezsigntemplatepackage_relation_request.h
 *
 * The object used in /1/object/ezsignfolder/{pkiEzsignfolderID}/importEzsigntemplatepackage Request
 */

#ifndef _custom_import_ezsigntemplatepackage_relation_request_H_
#define _custom_import_ezsigntemplatepackage_relation_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_import_ezsigntemplatepackage_relation_request_t custom_import_ezsigntemplatepackage_relation_request_t;




typedef struct custom_import_ezsigntemplatepackage_relation_request_t {
    int fki_ezsigntemplatepackagesigner_id; //numeric
    int fki_ezsignfoldersignerassociation_id; //numeric
    char *s_ezsigntemplatepackagesigner_description; // string

    int _library_owned; // Is the library responsible for freeing this object?
} custom_import_ezsigntemplatepackage_relation_request_t;

__attribute__((deprecated)) custom_import_ezsigntemplatepackage_relation_request_t *custom_import_ezsigntemplatepackage_relation_request_create(
    int fki_ezsigntemplatepackagesigner_id,
    int fki_ezsignfoldersignerassociation_id,
    char *s_ezsigntemplatepackagesigner_description
);

void custom_import_ezsigntemplatepackage_relation_request_free(custom_import_ezsigntemplatepackage_relation_request_t *custom_import_ezsigntemplatepackage_relation_request);

custom_import_ezsigntemplatepackage_relation_request_t *custom_import_ezsigntemplatepackage_relation_request_parseFromJSON(cJSON *custom_import_ezsigntemplatepackage_relation_requestJSON);

cJSON *custom_import_ezsigntemplatepackage_relation_request_convertToJSON(custom_import_ezsigntemplatepackage_relation_request_t *custom_import_ezsigntemplatepackage_relation_request);

#endif /* _custom_import_ezsigntemplatepackage_relation_request_H_ */

