from django import db
import pymongo

client = pymongo.MongoClient('localhost',27017)
db = client.subscribers
list = db.learnMongo.find()
db.learnMongo.insert_one({"x":11})
for item in list:
    print(item)