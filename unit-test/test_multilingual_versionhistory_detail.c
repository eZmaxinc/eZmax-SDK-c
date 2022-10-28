#ifndef multilingual_versionhistory_detail_TEST
#define multilingual_versionhistory_detail_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multilingual_versionhistory_detail_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multilingual_versionhistory_detail.h"
multilingual_versionhistory_detail_t* instantiate_multilingual_versionhistory_detail(int include_optional);



multilingual_versionhistory_detail_t* instantiate_multilingual_versionhistory_detail(int include_optional) {
  multilingual_versionhistory_detail_t* multilingual_versionhistory_detail = NULL;
  if (include_optional) {
    multilingual_versionhistory_detail = multilingual_versionhistory_detail_create(
      "Message important",
      "Important message"
    );
  } else {
    multilingual_versionhistory_detail = multilingual_versionhistory_detail_create(
      "Message important",
      "Important message"
    );
  }

  return multilingual_versionhistory_detail;
}


#ifdef multilingual_versionhistory_detail_MAIN

void test_multilingual_versionhistory_detail(int include_optional) {
    multilingual_versionhistory_detail_t* multilingual_versionhistory_detail_1 = instantiate_multilingual_versionhistory_detail(include_optional);

	cJSON* jsonmultilingual_versionhistory_detail_1 = multilingual_versionhistory_detail_convertToJSON(multilingual_versionhistory_detail_1);
	printf("multilingual_versionhistory_detail :\n%s\n", cJSON_Print(jsonmultilingual_versionhistory_detail_1));
	multilingual_versionhistory_detail_t* multilingual_versionhistory_detail_2 = multilingual_versionhistory_detail_parseFromJSON(jsonmultilingual_versionhistory_detail_1);
	cJSON* jsonmultilingual_versionhistory_detail_2 = multilingual_versionhistory_detail_convertToJSON(multilingual_versionhistory_detail_2);
	printf("repeating multilingual_versionhistory_detail:\n%s\n", cJSON_Print(jsonmultilingual_versionhistory_detail_2));
}

int main() {
  test_multilingual_versionhistory_detail(1);
  test_multilingual_versionhistory_detail(0);

  printf("Hello world \n");
  return 0;
}

#endif // multilingual_versionhistory_detail_MAIN
#endif // multilingual_versionhistory_detail_TEST
