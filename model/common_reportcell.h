/*
 * common_reportcell.h
 *
 * A cell in a Reportrow 
 */

#ifndef _common_reportcell_H_
#define _common_reportcell_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_reportcell_t common_reportcell_t;




typedef struct common_reportcell_t {
    int i_reportcell_columnspan; //numeric
    int i_reportcell_rowspan; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} common_reportcell_t;

__attribute__((deprecated)) common_reportcell_t *common_reportcell_create(
    int i_reportcell_columnspan,
    int i_reportcell_rowspan
);

void common_reportcell_free(common_reportcell_t *common_reportcell);

common_reportcell_t *common_reportcell_parseFromJSON(cJSON *common_reportcellJSON);

cJSON *common_reportcell_convertToJSON(common_reportcell_t *common_reportcell);

#endif /* _common_reportcell_H_ */

