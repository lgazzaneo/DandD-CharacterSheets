#ifndef GENERATOR_HEADER
#define GENERATOR_HEADER

#include "../semantic-analysis/abstract-syntax-tree.h"

void Generator(mainprogram * mp, int result);
void generatesheet(Sheet * sh);
void generatechbody(Body * b);
void generatemonsbody(MonsterBody * monsb);
void generateitembody(ItemBody * it);
void generatemerchantbody(NPCBody * mb);

void generatenamech(nameCharac * n);
void generatelevelc(levelCharac * l);
void generateclasses(classCharac * cc);
void generatebackgroundc(backgroundCharac * bc);
void generatealign(alignmentCharac * al);
void generatePlayerName(playername * pyn);
void generaterace(characrace * race);
void generateexp(exppointsCharac * exp);
void generateRest(restofbodyCharac * r);

void generatestats(statsSpread * ss);
void generateArmorC(ArmorClass * ac);
void generateInit(Initiative * i);
void generatespeed(Speed * sp);
void generateprof(proficienciesCh * pr);
void generatefeat(featuresCh * ft);
void generateequ(equipmentCh * eq);
void generateitems(itemsCh * it);
void generatebakst(CharacBackStory * mb);
void generatespb(Spellbook * sb);

void generateSpellcaster(spellcasterspells* scs);

void generatemonstype(TypeofMonster * ty);
void generatemonsattack(ListofAttacks * at);


void genarateitemname(ItemName * in);
void generateitrar(ItemRarity * ir);
void generateitdes(ItemDescription * id);

void generateStore(Store * st);



#endif
