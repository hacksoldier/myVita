//
//  Database.h
//  myVita
//
//  Created by Marco Velluto on 26/03/13.
//  Copyright (c) 2013 Algos. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "sqlite3.h"

static NSString * const KEY_CARTELLI = @"cartelli"; //ok
static NSString * const KEY_CATEGORIA = @"categoria"; //ok
static NSString * const KEY_CODICE = @"codice"; //ok
static NSString * const KEY_COLLOCAZIONE = @"collocazione"; //ok
static NSString * const KEY_COMUNE = @"comune"; //OK
static NSString * const KEY_DISPONIBILITA = @"disponibilita"; //ok
static NSString * const KEY_IMMAGINE = @"immagine";//ok
static NSString * const KEY_INDIRIZZO = @"indirizzo"; //OK
static NSString * const KEY_LATITUDINE = @"latitudine"; //ok
static NSString * const KEY_LOCALITA = @"localita"; // ok
static NSString * const KEY_LONGITUDINE = @"longitudine"; //ok
static NSString * const KEY_MAIL = @"mail"; //ok
static NSString * const KEY_MODELLO = @"modello"; //OK
static NSString * const KEY_NOME = @"nome"; //ok
static NSString * const KEY_NOTE = @"note"; //ok
static NSString * const KEY_OK = @"ok"; //ok
static NSString * const KEY_PROVINCIA = @"provincia"; //ok
static NSString * const KEY_RIFERIMENTO = @"riferimento"; //OK
static NSString * const KEY_SCAD_BATT = @"scadenzaBatteria";//ok
static NSString * const KEY_SCAD_ELET = @"scadenzaElettrodi";//ok
static NSString * const KEY_SERIE = @"serie";//OK
static NSString * const KEY_STATO = @"stato";//ok
static NSString * const KEY_TECA = @"teca";//ok
static NSString * const KEY_TELEFONO = @"telefono"; //ok
static NSString * const KEY_TEL_PUNTO_BLU = @"telpuntoblu"; //ok
static NSString * const KEY_ULTIMA_VERIFICA = @"ultimaVerifica";//ok
static NSString * const KEY_ULTIMA_MODIFICA = @"ultimamodifica"; //
static NSString * const KEY_ULTIMO_CORSO = @"ultimoCorso";//ok
static NSString * const KEY_LAST_UPDATE = @"lastUpdated";

@interface Database : NSObject {
    
    sqlite3 *db;
}

- (void) openDB;
- (void)createTableNamedDefibrillatori __attribute__ ((deprecated));
- (void)createTableDefibrillatore __attribute__ ((deprecated));
- (BOOL)createTableDefibrillatori;
- (void)riempiTabella:(NSArray *)array;
- (NSArray *)allObjects __attribute__((deprecated));
- (NSArray *)objects;
 ///@description Prende tutte le info da far vedere nella schermata di dettaglio + LE COORDINATE.
- (NSArray *)objectsV2;
- (NSArray *)objectsV3;
- (NSArray *)allLocation;
- (NSArray *)allObjectsInDictionary __attribute__((deprecated));
- (char *)DeleteTable:(NSString *)table;
- (int)countOfDb __attribute__((deprecated));
- (int)countOfDbFromDefibrillatori;
- (int)countOfDbFromTableNamed:(NSString *)tableName;
- (BOOL)insertRecordWithDefibrillatore:(NSDictionary *)dicDefibrillatori __attribute__ ((deprecated));
- (BOOL)insertRecord:(NSDictionary *)dicDefibrillatori;
- (BOOL)popolaTabellaWithArray:(NSArray *)arrDef;
+ (NSMutableArray *)sortWithArray:(NSMutableArray *)mArray __attribute__((deprecated));
+ (NSMutableArray *)sortWithArray2:(NSMutableArray *)mArray;




@end
