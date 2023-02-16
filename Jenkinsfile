pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'g++ -o PES2UG20CS515 PES2UG20CS515.cpp'
            }
        }

        stage('Test') {
            steps {
                sh '.PES2UG20CS515'
            }
        }

        stage('Deploy') {
            steps {
                sh 'echo "Deploying PES2UG20CS515 to production server"'
              
            }
        }
    }

    post {
        always {
            echo 'Pipeline completed'
        }
        failure {
            echo 'Pipeline failed'
        }
    }
}
