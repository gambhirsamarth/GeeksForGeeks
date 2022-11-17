// your code here
long long sum = 0;

        int i = 0 ;

        for(int j = 0 ; j < n ; j++)

        {

            sum += arr[j];

            while(sum > s && i < j)

            {

                sum -= arr[i++];

            }

            if(sum == s)

            return {i+1 , j+1};

        }

        return {-1};
