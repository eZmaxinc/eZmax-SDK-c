/*
 * multilingual_ezdoctemplatedocument_name.h
 *
 * The name1 of the Ezdoctemplatedocument
 */

#ifndef _multilingual_ezdoctemplatedocument_name_H_
#define _multilingual_ezdoctemplatedocument_name_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_ezdoctemplatedocument_name_t multilingual_ezdoctemplatedocument_name_t;




typedef struct multilingual_ezdoctemplatedocument_name_t {
    char *s_ezdoctemplatedocument_name1; // string
    char *s_ezdoctemplatedocument_name2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_ezdoctemplatedocument_name_t;

__attribute__((deprecated)) multilingual_ezdoctemplatedocument_name_t *multilingual_ezdoctemplatedocument_name_create(
    char *s_ezdoctemplatedocument_name1,
    char *s_ezdoctemplatedocument_name2
);

void multilingual_ezdoctemplatedocument_name_free(multilingual_ezdoctemplatedocument_name_t *multilingual_ezdoctemplatedocument_name);

multilingual_ezdoctemplatedocument_name_t *multilingual_ezdoctemplatedocument_name_parseFromJSON(cJSON *multilingual_ezdoctemplatedocument_nameJSON);

cJSON *multilingual_ezdoctemplatedocument_name_convertToJSON(multilingual_ezdoctemplatedocument_name_t *multilingual_ezdoctemplatedocument_name);

#endif /* _multilingual_ezdoctemplatedocument_name_H_ */

