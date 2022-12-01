#include "../support/logger.h"
#include "generator.h"
#include "../semantic-analysis/abstract-syntax-tree.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Implementación de "generator.h".
 */

FILE * f;

void Generator(mainprogram * mp, int result) {
	f = fopen("Sheet.html", "w");
	fprintf(f, "<!DOCTYPE html>\n");
	fprintf(f, "<html>\n");
	generatesheet(mp->sheet);
	fprintf(f, "</html>\n");
	fclose(f);	
}

void generatesheet(Sheet * sh){
	fprintf(f,"<head>\n");
	fprintf(f, "<style>\n");
	fprintf(f, "p{ \n");
	fprintf(f, "color: navy;\n");
	fprintf(f, "text-align:center;\n");
	fprintf(f, "} \n");
	fprintf(f, "</style>\n");
	fprintf(f, "<title>");

	switch (sh->type){
		case CHARACTERSH:
			fprintf(f, "Your Character Sheet with id = %d </title>\n", sh->id->value);
			fprintf(f, "</head>\n");
			fprintf(f, "<body>\n");
			generatechbody(sh->body);
			break;

		case MOSNTERSH:
			fprintf(f, "Your Monster Sheet with id = %d </title>\n", sh->id->value);
			fprintf(f, "</head>\n");
			fprintf(f, "<body>\n");
			generatemonsbody(sh->mbody);
			break;

		case ITEMSH:
			fprintf(f, "Your Item Sheet with id = %d </title>\n", sh->id->value);
			fprintf(f, "</head>\n");
			fprintf(f, "<body>\n");
			generateitembody(sh->itembody);
			break;

		case NPCSH:
			fprintf(f, "Your Merchant Sheet with id = %d </title>\n", sh->id->value);
			fprintf(f, "</head>\n");
			fprintf(f, "<body>\n");
			generatemerchantbody(sh->npcbody);
			break;

		default:
			LogError("Error en el tipo de Sheet");
			break;
	}
}

void generatechbody(Body * b){
		fprintf(f, "<p> Character Name: ");
		generatenamech(b->name);
		fprintf(f, "<p> Level: ");
		generatelevelc(b->level);
		fprintf(f, "<p> Class/Classes: ");
		generateclasses(b->class);
		fprintf(f, "<p> Background: ");
		generatebackgroundc(b->background);
		fprintf(f, "<p> Alignment: ");
		generatealign(b->alignment);
		fprintf(f, "<p> Player Name: ");
		generatePlayerName(b->playername);
		fprintf(f, "<p> Race: ");
		generaterace(b->race);
		fprintf(f, "<p> Experience Points: ");
		generateexp(b->exppoints);
		generateRest(b->restofbody);

		fprintf(f, "</body>");
	}

	void generatenamech(nameCharac * n){
		fprintf(f, "%s </p>\n", n->characname->text);
	}
	void generatelevelc(levelCharac * l){
		fprintf(f, "%d </p>\n", l->levelnum->value);
	}
	void generateclasses(classCharac * cc){
		switch (cc->mode)
		{
		case NODUALCLASS:
			fprintf(f, "%s </p>\n", cc->classname1->text);
			break;
		case SIDUALCLASS:
			fprintf(f, "%s y %s </p>\n", cc->classname1->text, cc->classname2->text);
			break;
		default:
			LogError("Error en el tipo de Clase");
			break;
		}
	}
	void generatebackgroundc(backgroundCharac * bc){
		fprintf(f, "%s </p>\n", bc->characbackgr->text);
	}
	void generatealign(alignmentCharac * al){
		fprintf(f, "%s </p>\n", al->alignment->text);
	}
	void generatePlayerName(playername * pyn){
		fprintf(f, "%s </p>\n", pyn->realname->text);
	}
	void generaterace(characrace * race){
		fprintf(f, "%s </p>\n", race->characterrace->text);
	}
	void generateexp(exppointsCharac * exp){
		fprintf(f, "%d / 100 </p>\n", exp->qexppoint->value);
	}
	void generateRest(restofbodyCharac * r){
		fprintf(f, "<p> Stats: </p>\n");
		fprintf(f, "<p>  HealthP  Strenght  Dexterity  Constitution  Intelligence  Wisdom  Charisma  </p>\n");
		generatestats(r->stats);
		fprintf(f, "<p> Armor Class: ");
		generateArmorC(r->armorclass);
		fprintf(f, "<p> Initiative: ");
		generateInit(r->initiative);
		fprintf(f, "<p> Speed ");
		generatespeed(r->speed);
		fprintf(f, "<p> Proficiencies: </p>\n");
		generateprof(r->proficiencies);
		fprintf(f, "<p> Features: </p>\n");
		generatefeat(r->features);
		fprintf(f, "<p> Equipment: </p>\n");
		generateequ(r->equipment);
		fprintf(f, "<p> Items in Inventory: </p>\n");
		generateitems(r->items);
		fprintf(f, "<p> Backstory: ");
		generatebakst(r->backstory);
		fprintf(f, "<p> SpellBook: </p>\n");
		generatespb(r->spellbook);
	}


	void generatestats(statsSpread * ss){
		fprintf(f, "<p> %d   %d   %d   %d   %d   %d   %d  </p>\n", ss->hp->value, ss->strenght->value, ss->dexterity->value, ss->constitution->value, ss->intelligence->value, ss->wisdom->value, ss->charisma->value);
		fprintf(f, "<p>      %d   %d   %d   %d   %d   %d  </p>\n", ss->strmodif->value, ss->dexmodif->value, ss->conmodif->value, ss->intmodif->value, ss->wismodif->value, ss->chamodif->value);
	}
	void generateArmorC(ArmorClass * ac){
		fprintf(f, "%d </p>\n", ac->ArmorClass->value);
	}
	void generateInit(Initiative * i){
		fprintf(f, "%d </p>\n", i->intiative->value);
	}
	void generatespeed(Speed * sp){
		fprintf(f, "%d </p>\n", sp->speed->value);
	}
	void generateprof(proficienciesCh * pr){
		proficienciesCh * aux = malloc(sizeof(proficienciesCh));
		aux = pr;
		while (aux->type != NORECURTYPE){
			fprintf(f, "<p> %s: %s, %d </p>\n", aux->nameProf->text, aux->profDescription->text, aux->valueProf->value);
			aux = aux->profCh;
		}
		fprintf(f, "<p> %s: %s, %d </p>\n", aux->nameProf->text, aux->profDescription->text, aux->valueProf->value);
	}
	void generatefeat(featuresCh * ft){
		featuresCh* aux = malloc(sizeof(featuresCh));
		aux = ft;
		while (aux->type != NORECURTYPE){
			fprintf(f, "<p> %s: %s </p>\n", aux->nameFeat->text, aux->featDescription->text);
			aux = aux->featCh;
		}
		fprintf(f, "<p> %s: %s </p>\n", aux->nameFeat->text, aux->featDescription->text);
	}
	void generateequ(equipmentCh * eq){
		equipmentCh * aux = malloc(sizeof(equipmentCh));
		aux = eq;
		while (aux->type != NORECURTYPE){
			fprintf(f, "<p> %s: %s, %s </p>\n", aux->equipmentName->text, aux->equipmentDescription->text, aux->partofbody->text);
			aux = aux->profCh;
		}
		fprintf(f, "<p> %s: %s, %s </p>\n", aux->equipmentName->text, aux->equipmentDescription->text, aux->partofbody->text);
	}
	void generateitems(itemsCh * it){
		itemsCh * aux = malloc(sizeof(itemsCh));
		aux = it;
		while (aux->type != NORECURTYPE){
			fprintf(f, "<p> %s: %s, %s </p>\n", aux->nameFeat->text, aux->featDescription->text);
			aux = aux->itemCh;
		}
		fprintf(f, "<p> %s: %s </p>\n", aux->nameFeat->text, aux->featDescription->text);
	}
	void generatebakst(CharacBackStory * mb){
		fprintf(f, "%s </p>\n", mb->Cbackstory->text);
	}
	void generatespb(Spellbook * sb){
		if (sb->mode == NOSPBOOK){
			fprintf(f, "<p> Either you cant use speels or cantrips or you haven't gotten any yet </p>\n");
		}
		else{
			generateSpellcaster(sb->spbook);
		}
	}

	void generateSpellcaster(spellcasterspells* scs){
		spellcasterspells * aux = malloc(sizeof(spellcasterspells));
		aux = scs;
		while (aux->mode != ONLYONE){
			fprintf(f, "<p> Spell Level: %d, Spell: %s, %s, Damage Type: %d d %d + %d <p>\n", aux->Spellslevel->value, aux->spell->splname->text, aux->spell->spldescript->text, aux->spell->spldamage->cantDice, aux->spell->spldamage->typeofdice, aux->spell->spldamage->modif);
			aux = aux->spellcasterspells;
		}
		fprintf(f, "<p> Spell Level: %d, Spell: %s, %s, Damage Type: %d d %d + %d <p>\n", aux->Spellslevel->value, aux->spell->splname->text, aux->spell->spldescript->text, aux->spell->spldamage->cantDice, aux->spell->spldamage->typeofdice, aux->spell->spldamage->modif);
	}


	void generatemonsbody(MonsterBody * monsb){
		fprintf(f, "<p> Monster Name: ");
		generatenamech(monsb->nameMonster);
		fprintf(f, "<p> Type of Monster: ");
		generatemonstype(monsb->typeMonster);
		fprintf(f, "<p> Stats: </p>\n");
		fprintf(f, "<p>  HealthP  Strenght  Dexterity  Constitution  Intelligence  Wisdom  Charisma  </p>\n");
		generatestats(monsb->statsMonster);
		fprintf(f, "<p> Backstory: ");
		generatebakst(monsb->backstoryMonster);
		fprintf(f, "<p> Attacks: </p>\n");
		generatemonsattack(monsb->attacksMonst->listAttack);
		fprintf(f, "<p> SpellBook: </p>\n");
		generatespb(monsb->spellbook);
		

		fprintf(f, "</body>");
	}

	void generatemonstype(TypeofMonster * ty){
		fprintf(f, "%s </p>\n", ty->typeofMons->text);
	}
	void generatemonsattack(ListofAttacks * at){
		ListofAttacks * aux = malloc(sizeof(ListofAttacks));
		aux = at;
		while (aux->type != NORECURTYPE){
			fprintf(f, "Attack: %s, %s, AttackDmg: %d d %d + %d", aux->nameofAttack->text, aux->attackDesc->text, aux->attackDamage->cantDice, aux->attackDamage->typeofdice, aux->attackDamage->modif);
			aux = aux->OtherAttack;
		}
		fprintf(f, "Attack: %s, %s, AttackDmg: %d d %d + %d", aux->nameofAttack->text, aux->attackDesc->text, aux->attackDamage->cantDice, aux->attackDamage->typeofdice, aux->attackDamage->modif);
	}


	void generateitembody(ItemBody * it){
		fprintf(f, "<p> Item Name: ");
		genarateitemname(it->Itemname);
		fprintf(f, "<p> Rarity: ");
		generateitrar(it->Rarity);
		fprintf(f, "<p> Item Description: ");
		generateitdes(it->ItDescript);

		fprintf(f, "</body>");
	}
	
	void genarateitemname(ItemName * in){
		fprintf(f, "%s </p>\n", in->NameofItem->text);
	}
	void generateitrar(ItemRarity * ir){
		fprintf(f, "%s </p>\n", ir->RarityofItem->text);
	}
	void generateitdes(ItemDescription * id){
		fprintf(f, "%s </p>\n", id->DescriptionofItem->text);
	}

	
	void generatemerchantbody(NPCBody * mb){
		fprintf(f, "<p> Merchant Store </p>\n");
		generateStore(mb->merchant->stpre);
	}

	void generateStore(Store * st){
		Store * aux = malloc(sizeof(Store));
		aux = st;
		fprintf(f, "<p> Items to Sell: </p>\n");
		while(aux->type != NORECURTYPE){
			fprintf(f, "<p> %s, %s, %d </p>\n", aux->items->Itemname->text, aux->items->Itemdescription->text, aux->price->value);
			aux = aux->NewItem;
		}
		fprintf(f, "<p> %s, %s, %d </p>\n", aux->items->Itemname->text, aux->items->Itemdescription->text, aux->price->value);
	}
		