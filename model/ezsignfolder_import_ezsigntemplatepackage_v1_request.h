/*
 * ezsignfolder_import_ezsigntemplatepackage_v1_request.h
 *
 * Request for POST /1/object/ezsignfolder/{pkiEzsignfolderID}/importEzsigntemplatepackage
 */

#ifndef _ezsignfolder_import_ezsigntemplatepackage_v1_request_H_
#define _ezsignfolder_import_ezsigntemplatepackage_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_import_ezsigntemplatepackage_v1_request_t ezsignfolder_import_ezsigntemplatepackage_v1_request_t;

#include "custom_import_ezsigntemplatepackage_relation_request.h"



typedef struct ezsignfolder_import_ezsigntemplatepackage_v1_request_t {
    int fki_ezsigntemplatepackage_id; //numeric
    char *dt_ezsigndocument_duedate; // string
    list_t *a_obj_import_ezsigntemplatepackage_relation; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_import_ezsigntemplatepackage_v1_request_t;

__attribute__((deprecated)) ezsignfolder_import_ezsigntemplatepackage_v1_request_t *ezsignfolder_import_ezsigntemplatepackage_v1_request_create(
    int fki_ezsigntemplatepackage_id,
    char *dt_ezsigndocument_duedate,
    list_t *a_obj_import_ezsigntemplatepackage_relation
);

void ezsignfolder_import_ezsigntemplatepackage_v1_request_free(ezsignfolder_import_ezsigntemplatepackage_v1_request_t *ezsignfolder_import_ezsigntemplatepackage_v1_request);

ezsignfolder_import_ezsigntemplatepackage_v1_request_t *ezsignfolder_import_ezsigntemplatepackage_v1_request_parseFromJSON(cJSON *ezsignfolder_import_ezsigntemplatepackage_v1_requestJSON);

cJSON *ezsignfolder_import_ezsigntemplatepackage_v1_request_convertToJSON(ezsignfolder_import_ezsigntemplatepackage_v1_request_t *ezsignfolder_import_ezsigntemplatepackage_v1_request);

#endif /* _ezsignfolder_import_ezsigntemplatepackage_v1_request_H_ */

