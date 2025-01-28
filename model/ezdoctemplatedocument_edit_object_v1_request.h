/*
 * ezdoctemplatedocument_edit_object_v1_request.h
 *
 * Request for PUT /1/object/ezdoctemplatedocument/{pkiEzdoctemplatedocumentID}
 */

#ifndef _ezdoctemplatedocument_edit_object_v1_request_H_
#define _ezdoctemplatedocument_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatedocument_edit_object_v1_request_t ezdoctemplatedocument_edit_object_v1_request_t;

#include "ezdoctemplatedocument_request_compound.h"



typedef struct ezdoctemplatedocument_edit_object_v1_request_t {
    struct ezdoctemplatedocument_request_compound_t *obj_ezdoctemplatedocument; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezdoctemplatedocument_edit_object_v1_request_t;

__attribute__((deprecated)) ezdoctemplatedocument_edit_object_v1_request_t *ezdoctemplatedocument_edit_object_v1_request_create(
    ezdoctemplatedocument_request_compound_t *obj_ezdoctemplatedocument
);

void ezdoctemplatedocument_edit_object_v1_request_free(ezdoctemplatedocument_edit_object_v1_request_t *ezdoctemplatedocument_edit_object_v1_request);

ezdoctemplatedocument_edit_object_v1_request_t *ezdoctemplatedocument_edit_object_v1_request_parseFromJSON(cJSON *ezdoctemplatedocument_edit_object_v1_requestJSON);

cJSON *ezdoctemplatedocument_edit_object_v1_request_convertToJSON(ezdoctemplatedocument_edit_object_v1_request_t *ezdoctemplatedocument_edit_object_v1_request);

#endif /* _ezdoctemplatedocument_edit_object_v1_request_H_ */

