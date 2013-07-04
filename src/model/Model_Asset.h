// -*- C++ -*-
//=============================================================================
/**
 *      Copyright (c) 2013 Guan Lisheng (guanlisheng@gmail.com)
 *
 *      @file
 *
 *      @author [sqlite2cpp.py]
 *
 *      @brief
 *
 *      Revision History:
 *          AUTO GENERATED at 2013-07-03 22:55:49.491495.
 *          DO NOT EDIT!
 */
//=============================================================================

#ifndef MODEL_ASSET_H
#define MODEL_ASSET_H

#include "Model.h"
#include "db/DB_Table_Assets_V1.h"
class wxSQLite3Database;

class Model_Asset : public Model
{
public:
    typedef DB_Table_ASSETS_V1::COLUMN COLUMN;
    typedef DB_Table_ASSETS_V1::Data Data;
    typedef DB_Table_ASSETS_V1::Data_Set Data_Set;
public:
    Model_Asset(): Model(new DB_Table_ASSETS_V1()) {};
    ~Model_Asset() {};

public:
    static Model_Asset& instance()
    {
        return Singleton<Model_Asset>::instance();
    }

public:
    Data_Set all(COLUMN col = COLUMN(0), bool asc = true)
    {
        return dynamic_cast<DB_Table_ASSETS_V1*>(this->table_)->all(this->db_, col, asc);
    }
};

#endif // 
