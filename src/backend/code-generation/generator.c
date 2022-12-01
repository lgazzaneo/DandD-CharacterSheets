#include "../support/logger.h"
#include "generator.h"
#include "../semantic-analysis/abstract-syntax-tree.h"

/**
 * Implementación de "generator.h".
 */

void Generator(mainprogram * mp, int result) {
	LogInfo("El resultado de la expresion computada es: '%d'.", result);
	
}
