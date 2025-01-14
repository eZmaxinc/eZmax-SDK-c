#ifndef multilingual_ezdoctemplatedocument_name_TEST
#define multilingual_ezdoctemplatedocument_name_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multilingual_ezdoctemplatedocument_name_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multilingual_ezdoctemplatedocument_name.h"
multilingual_ezdoctemplatedocument_name_t* instantiate_multilingual_ezdoctemplatedocument_name(int include_optional);



multilingual_ezdoctemplatedocument_name_t* instantiate_multilingual_ezdoctemplatedocument_name(int include_optional) {
  multilingual_ezdoctemplatedocument_name_t* multilingual_ezdoctemplatedocument_name = NULL;
  if (include_optional) {
    multilingual_ezdoctemplatedocument_name = multilingual_ezdoctemplatedocument_name_create(
      "Contrat type",
      "Standard Contract"
    );
  } else {
    multilingual_ezdoctemplatedocument_name = multilingual_ezdoctemplatedocument_name_create(
      "Contrat type",
      "Standard Contract"
    );
  }

  return multilingual_ezdoctemplatedocument_name;
}


#ifdef multilingual_ezdoctemplatedocument_name_MAIN

void test_multilingual_ezdoctemplatedocument_name(int include_optional) {
    multilingual_ezdoctemplatedocument_name_t* multilingual_ezdoctemplatedocument_name_1 = instantiate_multilingual_ezdoctemplatedocument_name(include_optional);

	cJSON* jsonmultilingual_ezdoctemplatedocument_name_1 = multilingual_ezdoctemplatedocument_name_convertToJSON(multilingual_ezdoctemplatedocument_name_1);
	printf("multilingual_ezdoctemplatedocument_name :\n%s\n", cJSON_Print(jsonmultilingual_ezdoctemplatedocument_name_1));
	multilingual_ezdoctemplatedocument_name_t* multilingual_ezdoctemplatedocument_name_2 = multilingual_ezdoctemplatedocument_name_parseFromJSON(jsonmultilingual_ezdoctemplatedocument_name_1);
	cJSON* jsonmultilingual_ezdoctemplatedocument_name_2 = multilingual_ezdoctemplatedocument_name_convertToJSON(multilingual_ezdoctemplatedocument_name_2);
	printf("repeating multilingual_ezdoctemplatedocument_name:\n%s\n", cJSON_Print(jsonmultilingual_ezdoctemplatedocument_name_2));
}

int main() {
  test_multilingual_ezdoctemplatedocument_name(1);
  test_multilingual_ezdoctemplatedocument_name(0);

  printf("Hello world \n");
  return 0;
}

#endif // multilingual_ezdoctemplatedocument_name_MAIN
#endif // multilingual_ezdoctemplatedocument_name_TEST
