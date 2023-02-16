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
                sh './PES2UG20CS515'
            }
        }

        stage('Deploy') {
            steps {
                sh 'git push origin master'
            }
        }
    }

    post {
        always {
            script {
                if (currentBuild.result == "FAILURE") {
                    echo "pipeline failed"
                }
            }
        }
    }
}
