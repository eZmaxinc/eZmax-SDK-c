/*
 * multilingual_ezmaxcustomer_company.h
 *
 * Company of the Ezmaxcustomer
 */

#ifndef _multilingual_ezmaxcustomer_company_H_
#define _multilingual_ezmaxcustomer_company_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_ezmaxcustomer_company_t multilingual_ezmaxcustomer_company_t;




typedef struct multilingual_ezmaxcustomer_company_t {
    char *s_ezmaxcustomer_company1; // string
    char *s_ezmaxcustomer_company2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_ezmaxcustomer_company_t;

__attribute__((deprecated)) multilingual_ezmaxcustomer_company_t *multilingual_ezmaxcustomer_company_create(
    char *s_ezmaxcustomer_company1,
    char *s_ezmaxcustomer_company2
);

void multilingual_ezmaxcustomer_company_free(multilingual_ezmaxcustomer_company_t *multilingual_ezmaxcustomer_company);

multilingual_ezmaxcustomer_company_t *multilingual_ezmaxcustomer_company_parseFromJSON(cJSON *multilingual_ezmaxcustomer_companyJSON);

cJSON *multilingual_ezmaxcustomer_company_convertToJSON(multilingual_ezmaxcustomer_company_t *multilingual_ezmaxcustomer_company);

#endif /* _multilingual_ezmaxcustomer_company_H_ */

