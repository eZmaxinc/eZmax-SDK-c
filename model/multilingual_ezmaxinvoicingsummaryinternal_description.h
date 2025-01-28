/*
 * multilingual_ezmaxinvoicingsummaryinternal_description.h
 *
 * Description of the Ezmaxinvoicingsummaryinternal
 */

#ifndef _multilingual_ezmaxinvoicingsummaryinternal_description_H_
#define _multilingual_ezmaxinvoicingsummaryinternal_description_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_ezmaxinvoicingsummaryinternal_description_t multilingual_ezmaxinvoicingsummaryinternal_description_t;




typedef struct multilingual_ezmaxinvoicingsummaryinternal_description_t {
    char *s_ezmaxinvoicingsummaryinternal_description1; // string
    char *s_ezmaxinvoicingsummaryinternal_description2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_ezmaxinvoicingsummaryinternal_description_t;

__attribute__((deprecated)) multilingual_ezmaxinvoicingsummaryinternal_description_t *multilingual_ezmaxinvoicingsummaryinternal_description_create(
    char *s_ezmaxinvoicingsummaryinternal_description1,
    char *s_ezmaxinvoicingsummaryinternal_description2
);

void multilingual_ezmaxinvoicingsummaryinternal_description_free(multilingual_ezmaxinvoicingsummaryinternal_description_t *multilingual_ezmaxinvoicingsummaryinternal_description);

multilingual_ezmaxinvoicingsummaryinternal_description_t *multilingual_ezmaxinvoicingsummaryinternal_description_parseFromJSON(cJSON *multilingual_ezmaxinvoicingsummaryinternal_descriptionJSON);

cJSON *multilingual_ezmaxinvoicingsummaryinternal_description_convertToJSON(multilingual_ezmaxinvoicingsummaryinternal_description_t *multilingual_ezmaxinvoicingsummaryinternal_description);

#endif /* _multilingual_ezmaxinvoicingsummaryinternal_description_H_ */

