#  linear regration in ml 

import numpy as np
import numpy as np
import pandas as pd
from sklearn.datasets import load_breast_cancer
import matplotlib.pyplot as plt


df = load_breast_cancer()
# print(df)
dataset=pd.DataFrame(df.data)
dataset.columns=df.feature_names
dataset.head()
# print(dataset)

## Independent features and dependent features


X=dataset   # dependent dataset 
y=df.target         # independent dataset 


## train test split 

from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.30, random_state=42)

    ## standardizing the dataset
from sklearn.preprocessing import StandardScaler
scaler = StandardScaler()
X_train = scaler.fit_transform(X_train)
X_test= scaler.transform(X_test)

from sklearn.linear_model import LinearRegression

##cross validation

from sklearn.model_selection import cross_val_score
regression=LinearRegression()
regression.fit(X_train,y_train)
mse=cross_val_score(regression,X_train,y_train,scoring='neg_mean_squared_error',cv=10)
means_of_mse=np.mean(mse)
# print(means_of_mse)
reg_pred=regression.predict(X_test)
print(reg_pred)

import seaborn as sns
sns.displot(reg_pred-y_test,kind='kde')


from sklearn.metrics import r2_score
score=r2_score(reg_pred,y_test)
print(score)